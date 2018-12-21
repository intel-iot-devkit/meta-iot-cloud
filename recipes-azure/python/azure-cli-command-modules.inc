#
# Helper class for command module recipes
#

require azure-cli-common.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-cli-command-modules-nspkg \
"

distutils_do_install_append() {
    rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/cli/command_modules/__init__.py
    rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/cli/command_modules/__init__.pyc
}
