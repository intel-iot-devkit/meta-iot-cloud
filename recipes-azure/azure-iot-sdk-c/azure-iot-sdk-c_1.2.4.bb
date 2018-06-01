DESCRIPTION = "Microsoft Azure IoT SDKs and libraries for C"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-iot-sdk-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

SRC_URI = "\
	gitsm://github.com/Azure/azure-iot-sdk-c.git \
"
SRCREV = "ad28b943aceea95df07d27d97206c987ebdd86f8"

PR = "r0"

include ${PN}.inc
include ${PN}-devkit.inc
