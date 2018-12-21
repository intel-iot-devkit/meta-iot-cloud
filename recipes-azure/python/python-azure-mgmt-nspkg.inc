DESCRIPTION = "Microsoft Azure Resource Management Namespace Package"

PV = "2.0.0"
PR = "r0"

RDEPENDS_${PN} = "\
    ${PYTHON_PN}-azure-nspkg \
"

SRCREV = "2333be3c39648beb9bd16b67d2400a5088b5c7ba"

FILES_${PN} = "\
    ${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/*.py \
    ${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/*.pyc \
    ${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_nspkg-* \
"

SRC_DIR = "azure-mgmt-nspkg"
