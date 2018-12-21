DESCRIPTION = "GRPC library for the Google Cloud Speech API"
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

SRC_NAME = "proto-google-cloud-speech-v1"

SRC_URI = "https://pypi.python.org/packages/06/dd/60fd47710e1d8429e01ee34560a2e31debf04efd3689a8897a8476766518/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "e2b3a5e48a8e38f1d7622c54c037663b"
SRC_URI[sha256sum] = "55a64655eb1704f97727ab75cbe77790952c22e1c90d9a569d0bd769ceb7fb0a"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
