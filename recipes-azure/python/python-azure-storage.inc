DESCRIPTION = "Microsoft Azure Storage Client Library for Python"
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-storage-python"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=34f8c1142fd6208a8be89399cb521df9"

PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-common \
    ${PYTHON_PN}-cryptography \
    ${PYTHON_PN}-dateutil \
    ${PYTHON_PN}-requests \
"

SRC_URI = "git://github.com/Azure/azure-storage-python.git"
SRCREV = "11d0f03790423ae1e9fc8f6dc7b44383bc03febc"

S = "${WORKDIR}/git"


distutils_do_install_append() {
    rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/__init__.py
    rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/__init__.pyc
}
