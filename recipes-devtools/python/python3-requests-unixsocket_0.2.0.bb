DESCRIPTION = "Use requests to talk HTTP via a UNIX domain socket"
HOMEPAGE = "https://github.com/msabramo/requests-unixsocket"
AUTHOR = "Marc Abramowitz"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=d2794c0df5b907fdace235a619d80314"

inherit pypi setuptools3

DEPENDS += "\
    python3-pbr-native \
"

RDEPENDS_${PN} += "\
    python3-requests \
    python3-urllib3 \
"

RDEPENDS_${PN} += " \
    python3-io \
"

SRC_URI[sha256sum] = "9e5c1a20afc3cf786197ae59c79bcdb0e7565f218f27df5f891307ee8817c1ea"
