inherit setuptools
require python-azure-multiapi-storage.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-futures \
"

distutils_do_install_append() {
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/__init__.py
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/__init__.pyc
}
