DESCRIPTION = "Microsoft Azure IoT SDKs and libraries for C"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-iot-sdk-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

SRC_URI = "\
    gitsm://github.com/Azure/azure-iot-sdk-c.git;protocol=https;branch=main \
"

SRCREV = "09d4e9ca46d1facea7d6d0c7ac13e56edd0a715f"

PV = "1.13.0+git${SRCPV}"

include ${BPN}.inc
