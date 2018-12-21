inherit setuptools3
require python-azure-storage.inc

distutils3_do_install_append() {
    rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/__init__.py
    rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/__init__.pyc
    rm -rf ${D}${PYTHON_SITEPACKAGES_DIR}/azure/__pycache__
}
