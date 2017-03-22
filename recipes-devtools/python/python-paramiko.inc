DESCRIPTION = "SSH2 protocol library"
HOMEPAGE = "https://github.com/paramiko/paramiko/"
AUTHOR = "Jeff Forcier"
LICENSE = "LGPL"
LIC_FILES_CHKSUM = "file://LICENSE;md5=fd0120fc2e9f841c73ac707a30389af5"

SRC_URI = "git://github.com/paramiko/paramiko.git"
SRCREV = "889480a5d032772e14af896c8df838aaf5f86703"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-cryptography \
	${PYTHON_PN}-pyasn1 \
"

PR = "r0"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
