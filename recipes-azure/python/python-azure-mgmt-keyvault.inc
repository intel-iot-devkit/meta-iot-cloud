DESCRIPTION = "Microsoft Azure KeyVault Resource Management Client Library for Python"

PV = "0.31.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "dee90742ff3eb352938013292c0182d76821df49"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/keyvault/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_keyvault-* \
"

SRC_DIR = "azure-mgmt-keyvault"
