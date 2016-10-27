DESCRIPTION = "A Python SOCKS client module"
HOMEPAGE = "http://python-requests.org"
AUTHOR = "Anorov"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE;md5=1d457bcffb9661b45f799d4efee72f16"

SRC_URI = "git://github.com/Anorov/PySocks.git"
SRCREV = "fc1d646a3c0007de53d43405a9b4e871470a3d33"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
