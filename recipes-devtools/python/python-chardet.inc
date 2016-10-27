DESCRIPTION = "Universal encoding detector for Python 2 and 3"
HOMEPAGE = "https://github.com/chardet/chardet"
AUTHOR = "Mark Pilgrim"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://LICENSE;md5=a6f89e2100d9b6cdffcea4f398e37343"

SRC_URI = "git://github.com/chardet/chardet.git"
SRCREV = "5f2eff2fd66bf93cc7d17ceec0da5833d1da3e56"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
