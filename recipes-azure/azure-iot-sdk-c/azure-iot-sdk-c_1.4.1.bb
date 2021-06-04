DESCRIPTION = "Microsoft Azure IoT SDKs and libraries for C"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-iot-sdk-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

SRC_URI = "\
    git://github.com/Azure/azure-iot-sdk-c.git;branch=lts_07_2020 \
"

SRCREV = "0528d52fc15767f4b3ba535ff35453d4e6b78f07"

PR = "r0"

include ${BPN}.inc
