DESCRIPTION = "Microsoft Azure EventHub Management Client Library for Python"

PR = "r0"

require azure-mgmt-common.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-netclient \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-common \
    ${PYTHON_PN}-msrestazure \
"

PYPI_PACKAGE_EXT = "zip"

inherit pypi

SRC_URI[md5sum] = "7cdbfb3d9552c40f229664225f28d1e7"
SRC_URI[sha256sum] = "50668e908b005b595383ccba97c23d2811130ab7c2bc17e3c90b1a2618131079"