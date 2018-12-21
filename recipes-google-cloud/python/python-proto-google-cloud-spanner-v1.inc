DESCRIPTION = "GRPC library for the Cloud Spanner API"
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

SRC_NAME = "proto-google-cloud-spanner-v1"

SRC_URI = "https://pypi.python.org/packages/e7/ea/cf6300e8754ab38432bf7754defd2c6e05cca3d0cef7eedc895fb451e936/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "74a97dcd47687b9e9ef2c981bad45560"
SRC_URI[sha256sum] = "c5da5a578bdb339b090fb806b4b938249eeec69da92b9b40755963e2505ad7bd"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
