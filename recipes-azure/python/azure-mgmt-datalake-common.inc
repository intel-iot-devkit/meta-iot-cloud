#
# Helper class for azure-mgmt-* recipes
#

require azure-mgmt-common.inc

distutils_do_install_append() {
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/datalake/*.py
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/datalake/*.pyc
}
