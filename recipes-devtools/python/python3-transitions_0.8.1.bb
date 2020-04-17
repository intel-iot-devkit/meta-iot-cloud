SUMMARY = "A lightweight, object-oriented Python state machine implementation with many extensions."
AUTHOR = "Tal Yarkoni"
HOMEPAGE = "http://github.com/pytransitions/transitions"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=8734a2c2e13bbf9c2fd1b6cb64af8219"

inherit pypi setuptools3

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-six \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-asyncio \
    ${PYTHON_PN}-logging \
    ${PYTHON_PN}-numbers \
    ${PYTHON_PN}-threading \
    ${PYTHON_PN}-typing \
"

PR = "r0"

SRC_URI[sha256sum] = "2b8cf2078ed189ffbb0f29421798d7a63ff0d7823682a0d69c01bd8240363cac"
