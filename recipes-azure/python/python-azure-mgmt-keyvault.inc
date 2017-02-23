DESCRIPTION = "Microsoft Azure KeyVault Resource Management Client Library for Python"

PV = "0.30.1"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "57449531d29584f3cc6a8c63c8b92456a99da1c0"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/keyvault/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_keyvault-* \
"

SRC_DIR = "azure-mgmt-keyvault"
