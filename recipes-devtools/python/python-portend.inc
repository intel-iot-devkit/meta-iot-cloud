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
SRCREV = "3c79ca8889bf4886ae6499fb04abf85aaa486cf6"

S = "${WORKDIR}/git"

do_compile_prepend() {
	# Fix-up setup script for older versions of setuptools
	sed -i '42,44d' ${S}/setup.py
}
