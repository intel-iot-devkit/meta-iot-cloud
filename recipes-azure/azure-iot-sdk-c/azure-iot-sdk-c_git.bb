DESCRIPTION = "Microsoft Azure IoT SDKs and libraries for C"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-iot-sdk-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

BRANCH = "lts_02"
SRC_URI = "\
    git://github.com/Azure/azure-iot-sdk-c.git;branch=${BRANCH} \
"

SRCREV = "0528d52fc15767f4b3ba535ff35453d4e6b78f07"

PV = "${BRANCH}+git${SRCPV}"

include ${BPN}.inc
