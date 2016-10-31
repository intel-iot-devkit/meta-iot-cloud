DESCRIPTION = "Microsoft Azure Legacy Service Management Client Library for Python"

PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-requests \
	${PYTHON_PN}-pyopenssl \
"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/servicemanagement/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_servicemanagement_legacy-* \
"

distutils_do_install_append() {
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/*.py
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/*.pyc
}

SRC_DIR = "azure-servicemanagement-legacy"
SRCREV = "ede6f993191d6c77230240808bee7f9ba8f43106"
