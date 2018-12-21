DESCRIPTION = "Microsoft Azure Client Library for Python (Common)"

PV = "1.1.5"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-nspkg \
    ${PYTHON_PN}-msrestazure \
    ${PYTHON_PN}-msrest \
"

SRCREV = "2333be3c39648beb9bd16b67d2400a5088b5c7ba"

FILES_${PN} = "\
    ${PYTHON_SITEPACKAGES_DIR}/azure/common/* \
    ${PYTHON_SITEPACKAGES_DIR}/azure_common-* \
"

SRC_DIR = "azure-common"
