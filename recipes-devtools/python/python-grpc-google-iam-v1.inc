DESCRIPTION = "GRPC library for the google-iam-v1 service"
HOMEPAGE = "https://github.com/googleapis/googleapis"
AUTHOR = "Google Inc"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=2deedbf0e737771f60166811e74a6a92"

inherit pypi

PR = "r0"

RDEPENDS:${PN} += "\
    ${PYTHON_PN}-googleapis-common-protos \
    ${PYTHON_PN}-grpcio \
"

SRC_URI[sha256sum] = "0bfb5b56f648f457021a91c0df0db4934b6e0c300bd0f2de2333383fe958aa72"
