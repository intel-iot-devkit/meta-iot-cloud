HOMEPAGE = "https://github.com/GoogleCloudPlatform/google-cloud-python"
AUTHOR = "Google Cloud Platform"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM ?= "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

SRC_NAME ?= "google-cloud-python"
SRC_URI = "git://github.com/GoogleCloudPlatform/${SRC_NAME}.git"
SRCREV ?= "214aba604fbcaa9e4936fa1798efde050389992a"

S = "${WORKDIR}/git"

distutils_do_compile_prepend() {
    cd ${S}/${SRC_DIR}
}

distutils_do_install_prepend() {
    cd ${S}/${SRC_DIR}
}

distutils_do_install_append() {
    rm -rf ${D}${PYTHON_SITEPACKAGES_DIR}/unit_tests
}
