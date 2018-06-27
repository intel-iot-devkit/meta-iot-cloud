DESCRIPTION = "Discover and load entry points from installed packages."
AUTHOR = "Thomas Kluyver"
HOMEPAGE = "https://github.com/takluyver/entrypoints"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=b6f7f5bd22a5dc0397c806c4e5f8cbd3"

PR = "r0"

SRC_URI[md5sum] = "0d3ad1b0130d91e3596ef3a59f25a56c"
SRC_URI[sha256sum] = "d2d587dde06f99545fb13a383d2cd336a8ff1f359c5839ce3a64c917d10c029f"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-compression \
	${PYTHON_PN}-io \
	${PYTHON_PN}-pprint \
	${PYTHON_PN}-shell \
"