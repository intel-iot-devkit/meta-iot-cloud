#
# Helper class for azure-mgmt-* recipes
#

require azure-mgmt-common.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-mgmt-datalake-nspkg \
"

distutils_do_install_append() {
    rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/datalake/*.py
    rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/datalake/*.pyc
}

distutils3_do_install_append() {
    rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/datalake/*.py
    rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/datalake/*.pyc
    rm -rf ${D}${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/datalake/__pycache__
}
