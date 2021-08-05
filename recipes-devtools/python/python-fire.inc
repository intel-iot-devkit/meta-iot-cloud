SUMMARY = "A library for automatically generating command line interfaces"
AUTHOR = "David Bieber <dbieber@google.com>"
HOMEPAGE = "https://github.com/google/python-fire"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=ab892b2b62f951d424bdb712a72584cc"

SRC_URI[sha256sum] = "9736a16227c3d469e5d2d296bce5b4d8fa8d7851e953bda327a455fc2994307f"

inherit pypi

RDEPENDS:${PN} += "\
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-shell \
"

RDEPENDS:${PN} += "\
    ${PYTHON_PN}-six \
    ${PYTHON_PN}-termcolor \
"
