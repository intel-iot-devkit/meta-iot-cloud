#
# Helper class for azure-storage-* recipes
#

require azure-storage.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-storage-nspkg \
    ${PYTHON_PN}-azure-nspkg \
"

distutils_do_install_append() {
    rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/__init__.py
    rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/__init__.pyc
    rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/storage/__init__.py
    rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/storage/__init__.pyc
}

distutils3_do_install_append() {
    rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/__init__.py
    rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/__init__.pyc
    rm -rf ${D}${PYTHON_SITEPACKAGES_DIR}/azure/__pycache__
    rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/storage/__init__.py
    rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/storage/__init__.pyc
    rm -rf ${D}${PYTHON_SITEPACKAGES_DIR}/azure/storage/__pycache__
}
