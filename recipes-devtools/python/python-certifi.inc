DESCRIPTION = "Python package for providing Mozilla's CA Bundle."
HOMEPAGE = "http://certifi.io/"
AUTHOR = "Kenneth Reitz"
LICENSE = "MPL-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=f77f61d14ee6feac4228d3ebd26cc1f1"

SRC_URI = "git://github.com/certifi/python-certifi.git"
SRCREV = "b40e53e5ed1eb74757e0bdae0d9cc2b9e273eccd"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
