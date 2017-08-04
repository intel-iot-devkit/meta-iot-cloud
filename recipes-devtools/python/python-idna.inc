DESCRIPTION = "A library to support the Internationalised Domain Names in Applications (IDNA) protocol as specified in RFC 5891"
HOMEPAGE = "https://github.com/kjd/idna"
AUTHOR = "Kim Davies"
LICENSE = "BSD-3-Clause | Python-2.0 | Unicode"
LIC_FILES_CHKSUM = "file://LICENSE.rst;md5=c9ba5acd829579492fd5eb306c7a0565"

SRC_NAME = "idna"

SRC_URI = "git://github.com/kjd/${SRC_NAME}.git"
SRCREV = "0088bfce9c3270e15d8356f0709110c1a9589d35"

PR = "r0"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
