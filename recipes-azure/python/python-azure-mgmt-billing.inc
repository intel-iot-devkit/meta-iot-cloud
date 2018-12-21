DESCRIPTION = "Microsoft Azure Billing Management Client Library for Python"

PV = "0.1.0"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-msrestazure \
    ${PYTHON_PN}-azure-common \
"

SRCREV = "d927b78745d8b85e603242f66f62ed9d36904cb1"

FILES_${PN} = "\
    ${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/billing/* \
    ${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_billing-* \
"

SRC_DIR = "azure-mgmt-billing"
