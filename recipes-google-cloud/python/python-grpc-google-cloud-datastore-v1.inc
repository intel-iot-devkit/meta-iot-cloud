DESCRIPTION = "GRPC library for the Google Datastore service"
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

SRC_NAME = "grpc-google-cloud-datastore-v1"

SRC_URI = "https://pypi.python.org/packages/c3/79/8b9fa0542c65643bc5ab197834904716a07d49f0d8dff82ccab5a4356912/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "e59edb3e49faae140c00564eab78266f"
SRC_URI[sha256sum] = "d3a7adc4919934cc4556ef76b594cb2d846678007f7f55548f629cbe36ff1d8a"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
