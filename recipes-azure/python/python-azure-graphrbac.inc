DESCRIPTION = "Microsoft Azure Graph RBAC Resource Management Client Library for Python"

PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
"

FILES_${PN} = "\
		${PYTHON_SITEPACKAGES_DIR}/azure/graphrbac/* \
		${PYTHON_SITEPACKAGES_DIR}/azure_graphrbac-* \
"

distutils_do_install_append() {
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/*.py
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/*.pyc
}

SRC_DIR = "azure-graphrbac"
SRCREV = "3632007c401ab7ce1ed8faf6742298f050856a97"
