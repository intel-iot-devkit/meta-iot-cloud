DESCRIPTION = "Pygments is a syntax highlighting package written in Python."
AUTHOR = " Georg Brandl"
HOMEPAGE = "http://pygments.org/"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4aec35eaf03f2237e4dafea7a7ee1fa6"

SRC_NAME = "Pygments"

SRC_URI = "https://pypi.python.org/packages/b8/67/ab177979be1c81bc99c8d0592ef22d547e70bb4c6815c383286ed5dec504/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "ed3fba2467c8afcda4d317e4ef2c6150"
SRC_URI[sha256sum] = "88e4c8a91b2af5962bfa5ea2447ec6dd357018e86e94c7d14bd8cacbc5b55d81"

PR = "r0"

S = "${WORKDIR}/${SRC_NAME}-${PV}"

BBCLASSEXTEND = "native nativesdk"
