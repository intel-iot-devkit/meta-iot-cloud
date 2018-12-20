DESCRIPTION = "Microsoft Azure Key Vault Client Library for Python"

PR = "r0"

require azure-sdk-common.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-codecs \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-netclient \
    ${PYTHON_PN}-threading \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-common \
    ${PYTHON_PN}-cryptography \
    ${PYTHON_PN}-msrestazure \
    ${PYTHON_PN}-requests \
"

PYPI_PACKAGE_EXT = "zip"

inherit pypi

SRC_URI[md5sum] = "5feaea3f44b8a32a1573f75f035cc9d6"
SRC_URI[sha256sum] = "835f5233a383d3de742d981a36e3c5b8114e3a5c08a2a95c002016d0cd8f11bd"