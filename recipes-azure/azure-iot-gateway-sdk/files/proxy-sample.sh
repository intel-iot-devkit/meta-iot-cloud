#!/bin/sh
build_root=$(cd "$(dirname "$0")" && pwd)
build_dir="$build_root"/build

rm -f "$build_dir"/proxy
rm -f "$build_dir"/proxy_remote
mkdir -p "$build_dir"

# Check for Azure IoT Gateway SDK headers
if [ ! -f /usr/include/azureiot/gateway.h ]; then
	echo Gateway SDK headers not found. Please make sure that the azure-iot-gateway-sdk-dev package is installed.
	exit 1
fi

echo ---------- Building the Azure Functions Gateway SDK sample ----------
gcc src/remote_main.c --std=c99 -I/usr/include/azureiot -L. -lproxy_gateway -laziotsharedutil -lnanomsg -o "$build_dir"/proxy_remote
gcc src/main.c --std=c99 -I/usr/include/azureiot -L. -lgateway -laziotsharedutil -lnanomsg -o "$build_dir"/proxy
[ $? -eq 0 ] || exit $?

cp -n src/*.json build/

echo Finished Successfully

echo Output can be found in "$build_dir"
