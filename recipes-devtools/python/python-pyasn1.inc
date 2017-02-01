SUMMARY = "ASN.1 types and codecs"
AUTHOR = "Ilya Etingof"
HOMEPAGE = "https://github.com/etingof/pyasn1"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=425e62320d430219736139b134db2fc4"

PR = "r0"

SRC_NAME = "pyasn1"

SRC_URI = "git://github.com/etingof/${SRC_NAME}.git"
SRCREV = "24d5afade36b05d7ba79460b8a9d4e5d99e19918"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
