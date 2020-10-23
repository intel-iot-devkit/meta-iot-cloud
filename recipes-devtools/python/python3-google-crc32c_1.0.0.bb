DESCRIPTION = "A python wrapper of the C library Google CRC32C"
HOMEPAGE = "https://github.com/googleapis/python-crc32c"
AUTHOR = "Google LLC"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/Apache-2.0;md5=89aea4e17d99a7cacdbeed46a0096b10"

inherit pypi setuptools3

PR = "r0"

DEPENDS += "\
    ${PYTHON_PN}-cffi-native \
    crc32c \
"

SRC_URI[sha256sum] = "9439b960b6ecd847557675d130fc3626d762bf535da595c20a6949a705fb3eae"
