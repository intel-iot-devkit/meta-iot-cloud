DESCRIPTION = "Common protobufs used in Google APIs"
HOMEPAGE = "https://github.com/googleapis/googleapis"
AUTHOR = "Google LLC"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=2deedbf0e737771f60166811e74a6a92"

PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-protobuf \
"

SRC_URI[md5sum] = "128dd2c9c1d64657113673d3cd344eff"
SRC_URI[sha256sum] = "e61b8ed5e36b976b487c6e7b15f31bb10c7a0ca7bd5c0e837f4afab64b53a0c6"
