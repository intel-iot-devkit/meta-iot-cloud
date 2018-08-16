DESCRIPTION = "More routines for operating on iterables, beyond itertools"
AUTHOR = "Erik Rose"
HOMEPAGE = "https://github.com/erikrose/more-itertools"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3396ea30f9d21389d7857719816f83b5"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-math \
    ${PYTHON_PN}-numbers \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-six \
"

PR = "r0"

SRC_URI[md5sum] = "42157ef9b677bdf6d3609ed6eadcbd4a"
SRC_URI[sha256sum] = "c476b5d3a34e12d40130bc2f935028b5f636df8f372dc2c1c01dc19681b2039e"
