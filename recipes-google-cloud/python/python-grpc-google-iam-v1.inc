DESCRIPTION = "GRPC library for the google-iam-v1 service"
HOMEPAGE = "https://github.com/googleapis/googleapis"
AUTHOR = "Google Inc"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=2deedbf0e737771f60166811e74a6a92"

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-googleapis-common-protos \
    ${PYTHON_PN}-oauth2client \
    ${PYTHON_PN}-grpcio \
"

PR = "r0"

SRC_NAME = "grpc-google-iam-v1"

SRC_URI = "https://pypi.python.org/packages/c4/85/1035192d27c9f9c1b7b26ed9379d3b685eb47a3d3d53df6a83c4059914e4/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "9f9630b40242bca9778254a03e68318a"
SRC_URI[sha256sum] = "27887bad756a50dd333d96028b77bfe9f3ad97a653cca8b0dbcdfa0d7569ca6b"

S = "${WORKDIR}/${SRC_NAME}-${PV}"