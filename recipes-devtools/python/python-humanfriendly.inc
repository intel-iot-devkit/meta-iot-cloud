SUMMARY = "Human friendly output for text interfaces using Python"
HOMEPAGE = "https://humanfriendly.readthedocs.io/"
AUTHOR = "Peter Odding"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=690da298a43805797a4fa7bbe180b3c6"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-datetime \
	${PYTHON_PN}-fcntl \
	${PYTHON_PN}-io \
	${PYTHON_PN}-logging \
	${PYTHON_PN}-math \
	${PYTHON_PN}-numbers \
	${PYTHON_PN}-shell \
"

PR = "r0"

SRC_URI[md5sum] = "9ca2734742852b29dfa94e3f4e7295a9"
SRC_URI[sha256sum] = "937b4d2c99d29007023ebcab23579429541bfb3357a97e5df38fc5d851a112a3"