DESCRIPTION = "Microsoft Azure IoT SDKs and libraries for C"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-iot-sdk-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

SRC_URI = "\
    git://github.com/Azure/azure-iot-sdk-c.git;rev=290d45da2751245b5c5d43aac4a2850e0679a7da \
	git://github.com/Azure/azure-c-shared-utility.git;rev=8290634e5c2d005643d5a7dd5f8e65ad7a4353c2;destsuffix=git/c-utility \
	git://github.com/Azure/azure-umqtt-c.git;rev=65b6c9ef58c3f65ff48e95e295d4d13761fc4324;destsuffix=git/umqtt \
	git://github.com/Azure/azure-uamqp-c.git;rev=6f562bf9283ebed84bee19ad71b536b10dc71890;destsuffix=git/uamqp \
	git://github.com/kgabis/parson.git;rev=bef4969d258d5bcce0d686b7bf514550e2ac346d;destsuffix=git/deps/parson \
	git://github.com/Azure/azure-uhttp-c.git;rev=6e12a591ecd9e606399b12097fab4ef5e3bbd3c8;destsuffix=git/deps/uhttp \
"

PR = "r0"

include ${PN}.inc
