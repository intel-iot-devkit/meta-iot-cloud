DESCRIPTION = "Microsoft Azure KeyVault Client Library for Python"

PV = "0.3.7"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-msrestazure \
    ${PYTHON_PN}-azure-common \
"

SRCREV = "d5e550f5a5c831bcd057117fabcaaa93ec4c9cbc"

FILES_${PN} = "\
    ${PYTHON_SITEPACKAGES_DIR}/azure/keyvault/* \
    ${PYTHON_SITEPACKAGES_DIR}/azure_keyvault-* \
"

SRC_DIR = "azure-keyvault"
