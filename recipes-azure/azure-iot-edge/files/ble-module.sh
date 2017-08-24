#!/bin/sh
build_root=$(cd "$(dirname "$0")" && pwd)
build_dir="$build_root"/build
output_name=ble

rm -f "$build_dir"/"$output_name"
mkdir -p "$build_dir"

# Check for Azure IoT Edge headers
if [ ! -f /usr/include/azureiotedge/gateway.h ]; then
	echo Azure IoT Edge headers not found. Please make sure that the azure-iot-edge-dev package is installed.
	exit 1
fi

# Check for GIO headers
if [ ! -d /usr/include/gio-unix-2.0 ] || [ ! -d /usr/include/glib-2.0/gio ]; then
	echo GIO headers not found. Please make sure that the glibc-dev package is installed.
	exit 1
fi

# Check for GLib
if [ -d /usr/lib64/glib-2.0/include ]; then
	glib_inc=/usr/lib64/glib-2.0/include
elif [ -d /usr/lib/glib-2.0/include ]; then
	glib_inc=/usr/lib/glib-2.0/include
else
	echo GLib headers not found. Please make sure that the glibc-dev package is installed.
	exit 1
fi

echo ---------- Building the BLE IoT Edge module ----------
gcc -c -fPIC -std=c99 deps/dbus-bluez/src/bluez_characteristic.c -I/usr/include/azureiot -I/usr/include/azureiotedge -I/usr/include/azureiotedge/modules/common -I/usr/include/gio-unix-2.0 -I/usr/include/glib-2.0 -I"$glib_inc" -Ideps/dbus-bluez/inc -o "$build_dir"/bluez_characteristic.o
[ $? -eq 0 ] || exit $?
gcc -c -fPIC -std=c99 deps/dbus-bluez/src/bluez_device.c -I/usr/include/azureiot -I/usr/include/azureiotedge -I/usr/include/azureiotedge/modules/common -I/usr/include/gio-unix-2.0 -I/usr/include/glib-2.0 -I"$glib_inc" -Ideps/dbus-bluez/inc -o "$build_dir"/bluez_device.o
[ $? -eq 0 ] || exit $?
gcc -c -fPIC -std=c99 src/ble.c -I/usr/include/azureiot -I/usr/include/azureiotedge -I/usr/include/azureiotedge/modules/common -I/usr/include/gio-unix-2.0 -I/usr/include/glib-2.0 -I"$glib_inc" -Iinc -o "$build_dir"/ble.o
[ $? -eq 0 ] || exit $?
gcc -c -fPIC -std=c99 src/ble_c2d.c -I/usr/include/azureiot -I/usr/include/azureiotedge -I/usr/include/azureiotedge/modules/common -Iinc -o "$build_dir"/ble_c2d.o
[ $? -eq 0 ] || exit $?
gcc -c -fPIC -std=c99 src/ble_gatt_io_linux.c -I/usr/include/azureiot -I/usr/include/azureiotedge -I/usr/include/azureiotedge/modules/common -I/usr/include/gio-unix-2.0 -I/usr/include/glib-2.0 -I"$glib_inc" -Ideps/dbus-bluez/inc -Iinc -o "$build_dir"/ble_gatt_io_linux.o
[ $? -eq 0 ] || exit $?
gcc -c -fPIC -std=c99 src/ble_gatt_io_linux_connect.c -I/usr/include/azureiot -I/usr/include/azureiotedge -I/usr/include/azureiotedge/modules/common -I/usr/include/gio-unix-2.0 -I/usr/include/glib-2.0 -I"$glib_inc" -Ideps/dbus-bluez/inc -Iinc -o "$build_dir"/ble_gatt_io_linux_connect.o
[ $? -eq 0 ] || exit $?
gcc -c -fPIC -std=c99 src/ble_gatt_io_linux_disconnect.c -I/usr/include/azureiot -I/usr/include/azureiotedge -I/usr/include/azureiotedge/modules/common -I/usr/include/gio-unix-2.0 -I/usr/include/glib-2.0 -I"$glib_inc" -Ideps/dbus-bluez/inc -Iinc -o "$build_dir"/ble_gatt_io_linux_disconnect.o
[ $? -eq 0 ] || exit $?
gcc -c -fPIC -std=c99 src/ble_gatt_io_linux_read.c -I/usr/include/azureiot -I/usr/include/azureiotedge -I/usr/include/azureiotedge/modules/common -I/usr/include/gio-unix-2.0 -I/usr/include/glib-2.0 -I"$glib_inc" -Ideps/dbus-bluez/inc -Iinc -o "$build_dir"/ble_gatt_io_linux_read.o
[ $? -eq 0 ] || exit $?
gcc -c -fPIC -std=c99 src/ble_gatt_io_linux_write.c -I/usr/include/azureiot -I/usr/include/azureiotedge -I/usr/include/azureiotedge/modules/common -I/usr/include/gio-unix-2.0 -I/usr/include/glib-2.0 -I"$glib_inc" -Ideps/dbus-bluez/inc -Iinc -o "$build_dir"/ble_gatt_io_linux_write.o
[ $? -eq 0 ] || exit $?
gcc -c -fPIC -std=c99 src/ble_instr_utils.c -I/usr/include/azureiot -I/usr/include/azureiotedge -Iinc -o "$build_dir"/ble_instr_utils.o
[ $? -eq 0 ] || exit $?
gcc -c -fPIC -std=c99 src/bleio_seq_linux.c -I/usr/include/azureiot -I/usr/include/azureiotedge -Iinc -o "$build_dir"/bleio_seq_linux.o
[ $? -eq 0 ] || exit $?
gcc -c -fPIC -std=c99 src/bleio_seq_linux_schedule_periodic.c -I/usr/include/azureiot -I/usr/include/azureiotedge -I/usr/include/gio-unix-2.0 -I/usr/include/glib-2.0 -I"$glib_inc" -Iinc -o "$build_dir"/bleio_seq_linux_schedule_periodic.o
[ $? -eq 0 ] || exit $?
gcc -c -fPIC -std=c99 src/bleio_seq_linux_schedule_read.c -I/usr/include/azureiot -I/usr/include/azureiotedge -Iinc -o "$build_dir"/bleio_seq_linux_schedule_read.o
[ $? -eq 0 ] || exit $?
gcc -c -fPIC -std=c99 src/bleio_seq_linux_schedule_write.c -I/usr/include/azureiot -I/usr/include/azureiotedge -Iinc -o "$build_dir"/bleio_seq_linux_schedule_write.o
[ $? -eq 0 ] || exit $?
gcc -c -fPIC -std=c99 src/ble_utils.c -I/usr/include/azureiot -I/usr/include/azureiotedge -Iinc -o "$build_dir"/ble_utils.o
[ $? -eq 0 ] || exit $?
gcc -c -fPIC -std=c99 src/gio_async_seq.c -I/usr/include/azureiot -I/usr/include/azureiotedge -I/usr/include/azureiotedge/modules/common -I/usr/include/gio-unix-2.0 -I/usr/include/glib-2.0 -I"$glib_inc" -Iinc -o "$build_dir"/gio_async_seq.o
[ $? -eq 0 ] || exit $?


gcc -shared -Wl,-soname,libble_c2d.so -o "$build_dir"/libble_c2d.so "$build_dir"/ble_c2d.o "$build_dir"/ble_instr_utils.o -lgateway -laziotsharedutil
[ $? -eq 0 ] || exit $?
gcc -shared -Wl,-soname,libble.so -o "$build_dir"/libble.so "$build_dir"/ble.o "$build_dir"/ble_gatt_io_linux.o "$build_dir"/ble_gatt_io_linux_connect.o "$build_dir"/ble_gatt_io_linux_disconnect.o "$build_dir"/ble_gatt_io_linux_read.o "$build_dir"/ble_gatt_io_linux_write.o "$build_dir"/ble_instr_utils.o "$build_dir"/bleio_seq_linux.o "$build_dir"/bleio_seq_linux_schedule_periodic.o "$build_dir"/bleio_seq_linux_schedule_read.o "$build_dir"/bleio_seq_linux_schedule_write.o "$build_dir"/ble_utils.o "$build_dir"/gio_async_seq.o "$build_dir"/bluez_characteristic.o "$build_dir"/bluez_device.o -lglib-2.0 -lgobject-2.0 -lgio-2.0 -lgateway -laziotsharedutil
[ $? -eq 0 ] || exit $?

rm -f "$build_dir"/*.o

echo Finished Successfully

echo Output can be found in "$build_dir"
