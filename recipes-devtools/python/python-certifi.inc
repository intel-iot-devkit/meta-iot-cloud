DESCRIPTION = "Python package for providing Mozilla's CA Bundle."
HOMEPAGE = "http://certifi.io/"
AUTHOR = "Kenneth Reitz"
LICENSE = "MPL-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=f77f61d14ee6feac4228d3ebd26cc1f1"

SRC_URI = "git://github.com/certifi/python-certifi.git"
SRCREV = "f3bb7957567af5b278de5fe043e571c93cf14eb4"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
