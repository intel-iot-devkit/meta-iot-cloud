#
# Helper class for azure-mgmt-* recipes
#

require azure-sdk-common.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-nspkg \
"

distutils_do_install_append() {
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/*.py
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/*.pyc
}

distutils3_do_install_append() {
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/*.py
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/*.pyc
	rm -rf ${D}${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/__pycache__
}
