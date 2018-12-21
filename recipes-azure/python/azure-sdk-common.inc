#
# Helper class for azure-* recipes
#

require azure-sdk.inc

distutils_do_install_append() {
    rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/*.py
    rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/*.pyc
}

distutils3_do_install_append() {
    rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/*.py
    rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/*.pyc
    rm -rf ${D}${PYTHON_SITEPACKAGES_DIR}/azure/__pycache__
}
