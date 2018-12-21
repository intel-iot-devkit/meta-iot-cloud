DESCRIPTION = "Microsoft Azure IoT SDKs and libraries for C"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-iot-sdk-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

SRC_URI = "\
    git://github.com/Azure/azure-iot-sdk-c.git \
    git://github.com/kgabis/parson.git;destsuffix=parson;name=parson \
"
SRCREV = "3deb0ca3a8e2d220a50175bef71d16d1650a3a79"
SRCREV_parson = "bef4969d258d5bcce0d686b7bf514550e2ac346d"

PR = "r0"

include ${PN}.inc
