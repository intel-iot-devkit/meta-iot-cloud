SUMMARY = "Additional functools in the spirit of stdlib’s functools."
AUTHOR = "Jason R. Coombs"
HOMEPAGE = "https://github.com/jaraco/jaraco.functools"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=a33f38bbf47d48c70fe0d40e5f77498e"

PYPI_PACKAGE = "jaraco.functools"

DEPENDS += "\
    ${PYTHON_PN}-setuptools-scm-native \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-more-itertools \
    ${PYTHON_PN}-six \
"

PR = "r0"

SRC_URI[md5sum] = "7e82490c7705e6ed69934d35d5ac1d19"
SRC_URI[sha256sum] = "bad775f06e58bb8de5563bc2a8bf704168919e6779d6e849b1ca58b443e97f3b"
