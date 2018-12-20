DESCRIPTION = "Microsoft Azure Batch Management Client Library for Python"

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

SRC_URI[md5sum] = "fc6aa47af3def5fc9dd2fc5ca575d104"
SRC_URI[sha256sum] = "6e375ecdd5966ee9ee45b29c90a806388c27ceacc2cbd6dd406ff311b5d7da72"
