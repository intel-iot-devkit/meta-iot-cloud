DESCRIPTION = "Microsoft Azure KeyVault Client Library for Python"

PV = "0.30.0rc6"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
"

SRCREV = "2f86e7ec014f9f9030b9e860e21ea689615c09ed"

FILES_${PN} = "\
		${PYTHON_SITEPACKAGES_DIR}/azure/keyvault/* \
		${PYTHON_SITEPACKAGES_DIR}/azure_keyvault-* \
"

distutils_do_install_append() {
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/*.py
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/*.pyc
}

SRC_DIR = "azure-keyvault"
