DESCRIPTION = "Microsoft Azure Recovery Services Client Library for Python"

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

SRC_URI[md5sum] = "9592afc06f76ded86780eddede7b2231"
SRC_URI[sha256sum] = "e48f7769fb10a85ad857710c2cba47880166f69fe7da6b331771f129b21de95c"
