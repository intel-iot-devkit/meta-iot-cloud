DESCRIPTION = "A built-package format for Python."
HOMEPAGE = "https://github.com/pypa/wheel"
AUTHOR = "Daniel Holth"
SECTION = "devel/python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=9d66b41bc2a080e7174acc5dffecd752"

PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-compression \
	${PYTHON_PN}-crypt \
	${PYTHON_PN}-distutils \
	${PYTHON_PN}-email \
	${PYTHON_PN}-io \
	${PYTHON_PN}-json \
	${PYTHON_PN}-math \
	${PYTHON_PN}-shell \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-keyring \
"

SRC_URI[md5sum] = "0ac15797d94ca759702b1d52425850c4"
SRC_URI[sha256sum] = "0a2e54558a0628f2145d2fc822137e322412115173e8a2ddbe1c9024338ae83c"