SUMMARY = "Human friendly output for text interfaces using Python"
HOMEPAGE = "https://humanfriendly.readthedocs.io/"
AUTHOR = "Peter Odding"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=d4b9bfd363e871d2be165d0372c0169f"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-monotonic \
"

PR = "r0"

SRC_URI = "git://github.com/xolox/python-humanfriendly.git"
SRCREV = "323e523af1c864493d0acfe59d4d6484cbc75306"

S = "${WORKDIR}/git"
