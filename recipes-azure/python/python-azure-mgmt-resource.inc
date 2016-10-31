DESCRIPTION = "Microsoft Azure Resource Management Client Library for Python"

PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/resource/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_resource-* \
"

distutils_do_install_append() {
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/*.py
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/*.pyc
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/*.py
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/*.pyc
}

SRC_DIR = "azure-mgmt-resource"
SRCREV = "c194bf714b504b69da55e8e2d64b1d2e2ce2c215"
