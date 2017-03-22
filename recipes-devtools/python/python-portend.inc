SUMMARY = "PLY is yet another implementation of lex and yacc for Python."
HOMEPAGE = "http://www.dabeaz.com/ply/"
AUTHOR = "Jason R. Coombs"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://README.rst;beginline=17;endline=23;md5=7539f5d94d79ba9a8833f2051c507247"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-tempora \
"

PR = "r0"

SRC_URI = "git://github.com/jaraco/portend.git"
SRCREV = "ebaf5a1a7392e66f8e16a19e51dfb788f79627df"

S = "${WORKDIR}/git"
