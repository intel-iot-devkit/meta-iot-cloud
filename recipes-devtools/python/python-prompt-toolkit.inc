SUMMARY = "Library for building powerful interactive command lines in Python"
HOMEPAGE = "https://github.com/jonathanslenders/python-prompt-toolkit"
AUTHOR = "Jonathan Slenders"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE;md5=b2cde7da89f0c1f3e49bf968d00d554f"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-six \
	${PYTHON_PN}-wcwidth \
"

PR = "r0"

SRC_URI = "git://github.com/jonathanslenders/python-prompt-toolkit.git"
SRCREV = "875963bdd40497e89172bf038cacf7103a1bdb57"

S = "${WORKDIR}/git"
