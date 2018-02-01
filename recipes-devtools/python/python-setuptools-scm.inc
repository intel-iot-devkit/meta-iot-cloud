SUMMARY = "The blessed package to manage your versions by scm tags"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=838c366f69b72c5df05c96dff79b35f2"

RDEPENDS_${PN}_class-target = "\
    ${PYTHON_PN}-setuptools \
"

RDEPENDS_${PN}_class-native = "\
    ${PYTHON_PN}-setuptools-native \
"

PR = "r0"

SRC_URI = "git://github.com/pypa/setuptools_scm.git"
SRCREV = "a6f0878a67e6c2eb91ba4db1bbeb5f6c759bca00"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native"
