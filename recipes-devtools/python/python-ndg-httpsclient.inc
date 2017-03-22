DESCRIPTION = "Provides enhanced HTTPS support for httplib and urllib2 using PyOpenSSL"
HOMEPAGE = "https://github.com/cedadev/ndg_httpsclient"
AUTHOR = "Richard Wilkinson and Philip Kershaw"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://MANIFEST.in;md5=ce22c0cd986d2de3f7073cd6b5523ae0"

SRC_URI = "git://github.com/cedadev/ndg_httpsclient.git"
SRCREV = "e73dc056792ce9052db2fed1c103f4b937c1ed24"

DEPENDS += " \
	${PYTHON_PN}-pyopenssl \
"

RDEPENDS_${PN} += " \
	${PYTHON_PN}-pyopenssl \
	${PYTHON_PN}-pyasn1 \
"

PR = "r1"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
