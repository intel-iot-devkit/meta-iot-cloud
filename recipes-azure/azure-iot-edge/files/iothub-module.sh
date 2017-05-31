#!/bin/sh
build_root=$(cd "$(dirname "$0")" && pwd)
build_dir="$build_root"/build
output_name=iothub

rm -f "$build_dir"/"$output_name"
mkdir -p "$build_dir"

# Check for Azure IoT Edge headers
if [ ! -f /usr/include/azureiot/gateway.h ]; then
	echo Azure IoT Edge headers not found. Please make sure that the azure-iot-edge-dev package is installed.
	exit 1
fi

# Check which transports are available
iothub_flags=""
iothub_libs="-liothub_client"
if [ ! -f /usr/lib/libiothub_client_amqp_transport.so ] && [ ! -f /usr/lib64/libiothub_client_amqp_transport.so ]; then

	iothub_flags="$iothub_flags -DIOTHUBMODULE_NULL_AMQP"
else
	iothub_libs="$iothub_libs -liothub_client_amqp_transport"
fi

if [ ! -f /usr/lib/libiothub_client_http_transport.so ] && [ ! -f /usr/lib64/libiothub_client_http_transport.so ]; then
	iothub_flags="$iothub_flags -DIOTHUBMODULE_NULL_HTTP"
else
	iothub_libs="$iothub_libs -liothub_client_http_transport"
fi

if [ ! -f /usr/lib/libiothub_client_mqtt_transport.so ] && [ ! -f /usr/lib64/libiothub_client_mqtt_transport.so ]; then
	iothub_flags="$iothub_flags -DIOTHUBMODULE_NULL_MQTT"
else
	iothub_libs="$iothub_libs -liothub_client_mqtt_transport"
fi

echo ---------- Building the IoT Hub IoT Edge module ----------
gcc -c -fPIC -std=c99 src/"$output_name".c -I/usr/include/azureiot -I/usr/include/azureiot/modules/common -Iinc -o "$build_dir"/"$output_name".o
[ $? -eq 0 ] || exit $?
gcc -c -fPIC -std=c99 $iothub_flags src/null_protocol.c -I/usr/include/azureiot -o "$build_dir"/null_protocol.o
[ $? -eq 0 ] || exit $?
gcc -shared -Wl,-soname,lib"$output_name".so -o "$build_dir"/lib"$output_name".so "$build_dir"/"$output_name".o "$build_dir"/null_protocol.o -lgateway -laziotsharedutil $iothub_libs
[ $? -eq 0 ] || exit $?

rm -f "$build_dir"/*.o

echo Finished Successfully

echo Output can be found in "$build_dir"
