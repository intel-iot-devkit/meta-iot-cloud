SUMMARY = "PLY is yet another implementation of lex and yacc for Python."
HOMEPAGE = "http://www.dabeaz.com/ply/"
AUTHOR = "Jason R. Coombs"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=a33f38bbf47d48c70fe0d40e5f77498e"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-tempora \
"

PR = "r0"

SRC_URI = "git://github.com/jaraco/portend.git;tag=${PV}"

S = "${WORKDIR}/git"
