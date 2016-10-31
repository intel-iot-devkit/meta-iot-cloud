DESCRIPTION = "Microsoft Azure Client Library for Python (Common)"

PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-nspkg \
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-msrest \
"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/common/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_common-* \
"

distutils_do_install_append() {
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/*.py
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/*.pyc
}

SRC_DIR = "azure-common"
SRCREV = "71ebc5c5968f486dcc171c76eb6fe2f852c7afc0"
