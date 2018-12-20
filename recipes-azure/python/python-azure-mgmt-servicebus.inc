DESCRIPTION = "Microsoft Azure Service Bus Management Client Library for Python"

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

SRC_URI[md5sum] = "734fd59b2a12fdbd4b52e66f7a566cd8"
SRC_URI[sha256sum] = "d351cde0f2052916b11e2c2c8a36c00d3d4ab494350d5f2c53331af81f11a6ac"