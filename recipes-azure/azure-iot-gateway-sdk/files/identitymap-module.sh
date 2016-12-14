#!/bin/sh
build_root=$(cd "$(dirname "$0")" && pwd)
build_dir="$build_root"/build
output_name=identitymap

rm -f "$build_dir"/"$output_name"
mkdir -p "$build_dir"

# Check for Azure IoT Gateway SDK headers
if [ ! -f /usr/include/azureiot/gateway.h ]; then
	echo Gateway SDK headers not found. Please make sure that the azure-iot-gateway-sdk-dev package is installed.
	exit 1
fi

echo ---------- Building the Identity Map Gateway SDK module ----------
gcc -c -fPIC -std=c99 src/"$output_name".c -I/usr/include/azureiot -I/usr/include/azureiot/modules/common -Iinc -o "$build_dir"/"$output_name".o
[ $? -eq 0 ] || exit $?
gcc -shared -Wl,-soname,lib"$output_name".so -o "$build_dir"/lib"$output_name".so "$build_dir"/"$output_name".o -lgateway -laziotsharedutil
[ $? -eq 0 ] || exit $?

rm -f "$build_dir"/"$output_name".o

echo Finished Successfully

echo Output can be found in "$build_dir"
