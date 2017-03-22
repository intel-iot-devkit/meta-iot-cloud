SUMMARY = "A Python wrapper around the OpenSSL library"
AUTHOR = "Hynek Schlawack"
HOMEPAGE = "https://pyopenssl.readthedocs.io"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

DEPENDS += "\
	openssl \
	${PYTHON_PN}-cryptography \
"

RDEPENDS_${PN} += " \
	${PYTHON_PN}-cryptography \
	${PYTHON_PN}-six \
	${PYTHON_PN}-threading \
"

SRC_NAME = "pyopenssl"

SRC_URI = "git://github.com/pyca/${SRC_NAME}.git"
SRCREV = "c3b38e54183489a9afd11ce200bdb5317fc7ab75"

PR = "r0"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "nativesdk"
