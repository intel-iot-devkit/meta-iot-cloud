HOMEPAGE = "https://github.com/GoogleCloudPlatform/google-cloud-python"
AUTHOR = "Google Cloud Platform"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

PV ?= "0.22.0"

SRC_NAME = "google-cloud-python"
SRC_URI = "git://github.com/GoogleCloudPlatform/${SRC_NAME}.git"
SRCREV ?= "920345ae74eaf3eeed1c848e28cde687d8ccdcd3"

S = "${WORKDIR}/git"

distutils_do_compile_prepend() {
	cd ${S}/${SRC_DIR}
}

distutils_do_install_prepend() {
	cd ${S}/${SRC_DIR}
}
