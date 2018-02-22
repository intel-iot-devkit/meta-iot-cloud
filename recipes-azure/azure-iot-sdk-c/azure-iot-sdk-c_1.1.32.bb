DESCRIPTION = "Microsoft Azure IoT SDKs and libraries for C"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-iot-sdk-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

SRC_URI = "\
	gitsm://github.com/Azure/azure-iot-sdk-c.git \
"
SRCREV = "3deb0ca3a8e2d220a50175bef71d16d1650a3a79"

PR = "r0"

include ${PN}.inc
include ${PN}-devkit.inc
