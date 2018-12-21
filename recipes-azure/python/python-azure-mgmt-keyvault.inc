DESCRIPTION = "Microsoft Azure KeyVault Resource Management Client Library for Python"

PV = "0.40.0"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-msrestazure \
    ${PYTHON_PN}-azure-common \
"

SRCREV = "4f0567c069bf58732aa90315c8bdf583dc381df3"

FILES_${PN} = "\
    ${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/keyvault/* \
    ${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_keyvault-* \
"

SRC_DIR = "azure-mgmt-keyvault"
