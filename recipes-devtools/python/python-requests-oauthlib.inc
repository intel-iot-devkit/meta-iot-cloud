DESCRIPTION = "This project provides first-class OAuth library support for Requests."
HOMEPAGE = "https://github.com/requests/requests-oauthlib"
AUTHOR = "Kenneth Reitz"
LICENSE = "ISC"
LIC_FILES_CHKSUM = "file://LICENSE;md5=22d117a849df10d047ed9b792838e863"

RDEPENDS_${PN} += " \
	${PYTHON_PN}-requests \
	${PYTHON_PN}-oauthlib \
"

SRC_URI = "git://github.com/requests/requests-oauthlib.git"
SRCREV = "619ed2d77f269196d5af5be82e85ae5721ddc4a6"

PR = "r0"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
