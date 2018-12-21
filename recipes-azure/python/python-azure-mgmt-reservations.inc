DESCRIPTION = "Microsoft Azure Reservations Client Library for Python"

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

SRC_URI[md5sum] = "152002fb3cc986d0e843b73409ce6aec"
SRC_URI[sha256sum] = "40618a3700c47a788182649f238d985edf15b08b6577ea27557e70e2866ac171"