DESCRIPTION = "Beautiful, Pythonic protocol buffers."
HOMEPAGE = "https://github.com/googleapis/proto-plus-python.git"
AUTHOR = "Google LLC"
SECTION = "devel/python"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

inherit pypi setuptools3

DEPENDS += "\
    python3-protobuf \
"

RDEPENDS:${PN} += "\
    python3-protobuf \
"

PR = "r0"

SRC_URI[sha256sum] = "89075171ef11988b3fa157f5dbd8b9cf09d65fffee97e29ce403cd8defba19d2"
