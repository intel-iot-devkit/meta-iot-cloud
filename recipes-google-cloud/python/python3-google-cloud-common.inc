HOMEPAGE = "https://github.com/GoogleCloudPlatform/google-cloud-python"
AUTHOR = "Google Cloud Platform"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM ?= "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

SRC_NAME ?= "google-cloud-python"
SRC_URI = "git://github.com/GoogleCloudPlatform/${SRC_NAME}.git"
# Release 0.37
# Date:   Wed Jun 5 11:20:38 2019 -0600
SRCREV ?= "78c5a955211b4d3c646df5a7d579b2638e95c1e9"

S = "${WORKDIR}/git"

do_configure_prepend() {
    cd ${S}/${SRC_DIR}
    bbwarn "${S}/${SRC_DIR}"
}

do_compile_prepend() {
    cd ${S}/${SRC_DIR}
    bbwarn "${S}/${SRC_DIR}"
}

distutils3_do_install_prepend() {
    cd ${S}/${SRC_DIR}
}

distutils3_do_install_append() {
    rm -rf ${D}${PYTHON_SITEPACKAGES_DIR}/unit_tests
}
