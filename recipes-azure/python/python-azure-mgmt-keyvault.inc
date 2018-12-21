DESCRIPTION = "Microsoft Azure Key Vault Management Client Library for Python"

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

SRC_URI[md5sum] = "7e5077b29aa3a4dfa946814815061ef5"
SRC_URI[sha256sum] = "8f5f774e2b5e3e869a6991fabd26dc08b28608dd9c4cb835b9ea9cb04f17d103"
