DESCRIPTION = "Microsoft Azure Policy Insights Client Library for Python"

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

SRC_URI[md5sum] = "f16f6254edefaa0e24c9a1e3ffbc5593"
SRC_URI[sha256sum] = "ff94cb12d6e01bf1470c2a6af4ce6960669ab4209106153879ff97addc569ce1"