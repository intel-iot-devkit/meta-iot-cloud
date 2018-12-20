DESCRIPTION = "Microsoft Azure Data Lake Store Management Client Library for Python"

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

SRC_URI[md5sum] = "c90aafcd3ea5c750c78547b414a78f7b"
SRC_URI[sha256sum] = "9376d35495661d19f8acc5604f67b0bc59493b1835bbc480f9a1952f90017a4c"