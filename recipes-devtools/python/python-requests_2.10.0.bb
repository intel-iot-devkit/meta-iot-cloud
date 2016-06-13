DESCRIPTION = "Python HTTP for Humans."
HOMEPAGE = "http://python-requests.org"
SECTION = "devel/python"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=d9bb3515869c0f426cb8441c899ae7f5"

inherit setuptools

PR = "r0"

SRC_NAME = "requests"

SRC_URI = "https://github.com/kennethreitz/${SRC_NAME}/archive/v${PV}.tar.gz"

SRC_URI[md5sum] = "03000b031eabe33c579248e1c78aea60"
SRC_URI[sha256sum] = "53547040c63eb514638203c8211de6eb9b7db370535db4a5dc3801692c2c3f8b"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
