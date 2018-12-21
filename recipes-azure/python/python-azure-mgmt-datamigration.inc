DESCRIPTION = "Microsoft Azure Data Migration Client Library for Python"

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

SRC_URI[md5sum] = "9729039bc6eb3c077d99b55871b7dc0e"
SRC_URI[sha256sum] = "ea2920475f9e56e660003a06397228243042157d46674f8a09abaf2d0a933aed"