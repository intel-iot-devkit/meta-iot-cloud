DESCRIPTION = "A Python SOCKS client module"
HOMEPAGE = "http://python-requests.org"
AUTHOR = "Anorov"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE;md5=1d457bcffb9661b45f799d4efee72f16"

SRC_URI = "git://github.com/Anorov/PySocks.git"
SRCREV = "010c31bf1ae6cd93449089b73cefb35ca1ff6862"

PR = "r0"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "nativesdk"
