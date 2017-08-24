#!/bin/sh
build_root=$(cd "$(dirname "$0")" && pwd)
build_dir="$build_root"/build

rm -f "$build_dir"/proxy
rm -f "$build_dir"/proxy_remote
mkdir -p "$build_dir"

# Check for Azure IoT Edge headers
if [ ! -f /usr/include/azureiotedge/gateway.h ]; then
	echo Azure IoT Edge headers not found. Please make sure that the azure-iot-edge-dev package is installed.
	exit 1
fi

echo ---------- Building the Azure Functions IoT Edge sample ----------
gcc src/remote_main.c --std=c99 -I/usr/include/azureiot -I/usr/include/azureiotedge -L. -lproxy_gateway -laziotsharedutil -lnanomsg -o "$build_dir"/proxy_remote
gcc src/main.c --std=c99 -I/usr/include/azureiot -I/usr/include/azureiotedge -L. -lgateway -laziotsharedutil -lnanomsg -o "$build_dir"/proxy
[ $? -eq 0 ] || exit $?

cp -n src/*.json build/

echo Finished Successfully

echo Output can be found in "$build_dir"
