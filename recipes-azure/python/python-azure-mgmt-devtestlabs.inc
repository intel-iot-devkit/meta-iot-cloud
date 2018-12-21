DESCRIPTION = "Microsoft Azure DevTestLabs Management Client Library for Python"

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

SRC_URI[md5sum] = "3baaee5cc41749c4a27ed2a3519510d9"
SRC_URI[sha256sum] = "d416a6d0883b0d33a63c524db6455ee90a01a72a9d8757653e446bf4d3f69796"