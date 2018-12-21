DESCRIPTION = "Microsoft Azure IoTHub Provisioning Services Client Library for Python"

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

SRC_URI[md5sum] = "4a75cc3adbac04b1e0adfb1a9304814b"
SRC_URI[sha256sum] = "8c37acfd1c33aba845f2e0302ef7266cad31cba503cc990a48684659acb7b91d"