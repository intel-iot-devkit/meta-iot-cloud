DESCRIPTION = "A python wrapper of the C library Google CRC32C"
HOMEPAGE = "https://github.com/googleapis/python-crc32c"
AUTHOR = "Google LLC"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=75b3827ef914c0cd0b544360c97fb0df"

inherit pypi setuptools3

PR = "r0"

DEPENDS += "\
    ${PYTHON_PN}-cffi-native \
    crc32c \
"

SRC_URI[sha256sum] = "89284716bc6a5a415d4eaa11b1726d2d60a0cd12aadf5439828353662ede9dd7"
