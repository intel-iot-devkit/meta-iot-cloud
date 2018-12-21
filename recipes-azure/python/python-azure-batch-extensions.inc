DESCRIPTION = "Microsoft Azure Batch Extended Features"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-batch-cli-extensions"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=f74e59e099e328d80285c9eba6d4a53f"

PR = "r1"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-msrestazure \
    ${PYTHON_PN}-azure-batch \
    ${PYTHON_PN}-azure-mgmt-batch \
    ${PYTHON_PN}-azure-storage \
    ${PYTHON_PN}-azure-mgmt-storage \
"

SRC_URI = "git://github.com/Azure/azure-batch-cli-extensions.git"
SRCREV = "49ceebfec6d8beb60e447328f869a65e102d1881"

S = "${WORKDIR}/git"

distutils_do_install_append() {
    rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/__init__.py
    rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/__init__.pyc
}
