DESCRIPTION = "Microsoft Azure Data Lake Analytics Management Client Library for Python"

PR = "r0"

require azure-mgmt-datalake-common.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-netclient \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-common \
    ${PYTHON_PN}-msrestazure \
"

PYPI_PACKAGE_EXT = "zip"

inherit pypi

SRC_URI[md5sum] = "9292c387c1745bc13c3a43ab2bac608b"
SRC_URI[sha256sum] = "0d64c4689a67d6138eb9ffbaff2eda2bace7d30b846401673183dcb42714de8f"