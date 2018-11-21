inherit setuptools3
require python-azure-mgmt-storage.inc
require azure-mgmt-common.inc

distutils3_do_install_append() {
	rm -rf ${D}${PYTHON_SITEPACKAGES_DIR}/tests
}
