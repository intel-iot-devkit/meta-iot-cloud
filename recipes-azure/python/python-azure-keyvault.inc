DESCRIPTION = "Microsoft Azure KeyVault Client Library for Python"

PV = "0.2.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-msrestazure \
"

SRCREV = "839896b54d009525ee1f286c25523e65f549e415"

FILES_${PN} = "\
		${PYTHON_SITEPACKAGES_DIR}/azure/keyvault/* \
		${PYTHON_SITEPACKAGES_DIR}/azure_keyvault-* \
"

SRC_DIR = "azure-keyvault"
