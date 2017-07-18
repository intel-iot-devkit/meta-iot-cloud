DESCRIPTION = "Microsoft Azure KeyVault Client Library for Python"

PV = "0.3.4"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-common \
"

SRCREV = "3cbff04e0ed182a9eff2e3a9df6936c6c7b22cfb"

FILES_${PN} = "\
		${PYTHON_SITEPACKAGES_DIR}/azure/keyvault/* \
		${PYTHON_SITEPACKAGES_DIR}/azure_keyvault-* \
"

SRC_DIR = "azure-keyvault"
