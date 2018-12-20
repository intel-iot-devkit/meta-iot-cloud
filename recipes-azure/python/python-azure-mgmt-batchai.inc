DESCRIPTION = "Microsoft Azure BatchAI Management Client Library for Python"

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

SRC_URI[md5sum] = "6235495fa4c83bac95d7c84699b02a3f"
SRC_URI[sha256sum] = "f1870b0f97d5001cdb66208e5a236c9717a0ed18b34dbfdb238a828f3ca2a683"
