DESCRIPTION = "Microsoft Azure IoT SDKs - Macro Utils For C"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-macro-utils-c"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4283671594edec4c13aeb073c219237a"

SRC_URI = "\
    git://github.com/Azure/azure-macro-utils-c.git;protocol=https;branch=master \
"

SRCREV = "5926caf4e42e98e730e6d03395788205649a3ada"

PV = "1.1.0+git${SRCPV}"

require ${BPN}.inc
