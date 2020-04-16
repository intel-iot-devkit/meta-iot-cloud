DESCRIPTION = "Microsoft Azure IoT SDKs and libraries for C"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-iot-sdk-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

SRC_URI = "\
    gitsm://github.com/Azure/azure-iot-sdk-c.git;rev=290d45da2751245b5c5d43aac4a2850e0679a7da \
"

PR = "r0"

include ${PN}.inc
