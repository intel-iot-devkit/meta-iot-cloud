SUMMARY = "Objects and routines pertaining to date and time"
AUTHOR = "Jason R. Coombs"
HOMEPAGE = "https://github.com/jaraco/tempora"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=a33f38bbf47d48c70fe0d40e5f77498e"

DEPENDS += "\
    ${PYTHON_PN}-setuptools-scm-native \
"

RDEPENDS:${PN} += "\
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-math \
    ${PYTHON_PN}-numbers \
"

RDEPENDS:${PN} += "\
    ${PYTHON_PN}-jaraco-functools \
    ${PYTHON_PN}-pytz \
    ${PYTHON_PN}-six \
"

PR = "r0"

SRC_URI[md5sum] = "ab9bb719151aba1aee8a52128d1444d1"
SRC_URI[sha256sum] = "4848df474c9d7ad9515fbeaadc88e48843176b4b90393652156ccff613bcaeb1"
