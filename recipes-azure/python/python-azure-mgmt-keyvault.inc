DESCRIPTION = "Microsoft Azure KeyVault Resource Management Client Library for Python"

PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/keyvault/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_keyvault-* \
"

distutils_do_install_append() {
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/*.py
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/*.pyc
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/*.py
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/*.pyc
}

SRC_DIR = "azure-mgmt-keyvault"
SRCREV = "643777400d7862f0a3f0022e7c30de3a31488f07"
