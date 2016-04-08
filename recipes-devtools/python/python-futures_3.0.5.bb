DESCRIPTION = "Backport of the concurrent.futures package from Python 3.2"
SECTION = "devel/python"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE;md5=dd6708d05936d3f6c4e20ed14c87b5e3"
HOMEPAGE = "https://github.com/agronholm/pythonfutures"

DEPENDS = "python"

PR = "r1"

SRC_NAME = "futures"

SRC_URI = "https://pypi.python.org/packages/source/f/${SRC_NAME}/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "ced2c365e518242512d7a398b515ff95"
SRC_URI[sha256sum] = "0542525145d5afc984c88f914a0c85c77527f65946617edb5274f72406f981df"

S = "${WORKDIR}/${SRC_NAME}-${PV}"

inherit setuptools
