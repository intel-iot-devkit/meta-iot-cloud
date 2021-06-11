DESCRIPTION = "Microsoft Azure IoT SDKs - Macro Utils For C"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-macro-utils-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

SRC_URI = "\
    git://github.com/Azure/azure-macro-utils-c.git \
"

SRCREV = "3572824c55a1ad3634dd32c1f1dd729e59bbdedc"

PV = "1.1.0+git${SRCPV}"

require ${BPN}.inc
