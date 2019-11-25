SUMMARY = "A library for automatically generating command line interfaces"
AUTHOR = "David Bieber <dbieber@google.com>"
HOMEPAGE = "https://github.com/google/python-fire"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=ab892b2b62f951d424bdb712a72584cc"

SRC_URI[md5sum] = "9f3a91c285b50351d039b6f0bb91aac3"
SRC_URI[sha256sum] = "6865fefc6981a713d2ce56a2a2c92c56c729269f74a6cddd6f4b94d16ae084c9"

inherit pypi

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-six \
    ${PYTHON_PN}-termcolor \
"
