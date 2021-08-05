DESCRIPTION = "Beautiful, Pythonic protocol buffers."
HOMEPAGE = "https://github.com/googleapis/proto-plus-python.git"
AUTHOR = "Google LLC"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

inherit pypi setuptools3

RDEPENDS:${PN} += "\
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-logging \
"

RDEPENDS:${PN} += "\
    ${PYTHON_PN}-protobuf \
"

PR = "r0"

SRC_URI[sha256sum] = "416a0f13987789333cd8760a0ee998f8eccd6d7165ee9f283d64ca2de3e8774d"
