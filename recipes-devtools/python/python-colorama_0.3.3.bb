SUMMARY = "Cross-platform colored terminal text."
AUTHOR = "Arnon Yaari"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=14d0b64047ed8f510b51ce0495995358"

inherit setuptools

PR = "r0"

SRC_NAME = "colorama"

SRC_URI = "https://github.com/tartley/${SRC_NAME}/archive/v${PV}.tar.gz"
SRC_URI[md5sum] = "395439c56c4a74878f3ecf4b331575e3"
SRC_URI[sha256sum] = "b746a9b360e6b0793fe9efc7dbbcf4250ced96351312d8939e075d5149cd6346"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
