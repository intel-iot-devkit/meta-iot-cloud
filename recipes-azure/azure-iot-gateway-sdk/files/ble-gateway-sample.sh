#!/bin/sh
build_root=$(cd "$(dirname "$0")" && pwd)
build_dir="$build_root"/build
output_name=ble_gateway

rm -f "$build_dir"/"$output_name"
mkdir -p "$build_dir"

# Check for Azure IoT Gateway SDK headers
if [ ! -f /usr/include/azureiot/gateway.h ]; then
	echo Gateway SDK headers not found. Please make sure that the azure-iot-gateway-sdk-dev package is installed.
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

echo ---------- Building the BLE Gateway SDK sample ----------
gcc src/main.c --std=c99 -D_POSIX_C_SOURCE=1 -I/usr/include/azureiot -I/usr/include/glib-2.0 -I"$glib_inc" -L. -lgateway -laziotsharedutil -lglib-2.0 -o "$build_dir"/"$output_name"
[ $? -eq 0 ] || exit $?

echo ---------- Building the BLE Printer Gateway SDK module ----------
gcc -c -fPIC ble_printer/src/ble_printer.c --std=c99 -I/usr/include/azureiot -I/usr/include/glib-2.0 -I"$glib_inc" -Ible_printer/inc -I/usr/include/azureiot/modules/ble -I/usr/include/azureiot/modules/common -o "$build_dir"/ble_printer.o
[ $? -eq 0 ] || exit $?
gcc -shared -Wl,-soname,libble_printer.so -o "$build_dir"/libble_printer.so "$build_dir"/ble_printer.o -lgateway -laziotsharedutil -lglib-2.0
[ $? -eq 0 ] || exit $?

rm -f "$build_dir"/ble_printer.o

cp -n src/*.json build/

echo Finished Successfully

echo Output can be found in "$build_dir"
