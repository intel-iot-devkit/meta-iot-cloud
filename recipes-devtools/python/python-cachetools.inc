DESCRIPTION = "Extensible memoizing collections and decorators"
AUTHOR = "Thomas Kemmer"
HOMEPAGE = "https://github.com/tkem/cachetools"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=333b8952d56a2927aede601d24a60f7c"

PR = "r0"

SRC_URI = "git://github.com/tkem/cachetools.git"
SRCREV = "e27332bc82f4e327aedaec17c9b656ae719322ed"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
