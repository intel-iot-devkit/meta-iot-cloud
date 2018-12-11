#
# Helper class for azure-cli-* recipes
#

require azure-cli.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-nspkg \
	${PYTHON_PN}-azure-nspkg \
"

distutils_do_install_append() {
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/__init__.py
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/__init__.pyc
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/cli/__init__.py
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/cli/__init__.pyc
}

distutils3_do_install_append() {
    rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/__init__.py
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/__init__.pyc
	rm -rf ${D}${PYTHON_SITEPACKAGES_DIR}/azure/__pycache__
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/cli/__init__.py
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/cli/__init__.pyc
	rm -rf ${D}${PYTHON_SITEPACKAGES_DIR}/azure/cli/__pycache__
}
