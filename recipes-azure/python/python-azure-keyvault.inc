DESCRIPTION = "Microsoft Azure KeyVault Client Library for Python"

PV = "0.1.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-msrestazure \
"

SRCREV = "e9ed431c48666f385c31453b315beaa156fef2c6"

FILES_${PN} = "\
		${PYTHON_SITEPACKAGES_DIR}/azure/keyvault/* \
		${PYTHON_SITEPACKAGES_DIR}/azure_keyvault-* \
"

SRC_DIR = "azure-keyvault"
