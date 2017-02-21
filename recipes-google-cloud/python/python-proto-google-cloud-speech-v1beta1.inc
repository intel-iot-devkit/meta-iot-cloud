DESCRIPTION = "GRPC library for the Google Cloud Speech API"
HOMEPAGE = "https://github.com/googleapis/googleapis"
AUTHOR = "Google Inc"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=2deedbf0e737771f60166811e74a6a92"

RDEPENDS_${PN} += " \
	${PYTHON_PN}-googleapis-common-protos \
	${PYTHON_PN}-grpcio \
	${PYTHON_PN}-oauth2client \
"

PR = "r0"

SRC_NAME = "proto-google-cloud-speech-v1beta1"

SRC_URI = "https://pypi.python.org/packages/56/d5/e5c040ae1ee66d3a3681035b45254c8f0efad985b5a5255d8b5728f1afce/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "22ef3e6343ebc481ce47d4b7e39026af"
SRC_URI[sha256sum] = "49703522e06852c0c842216635b478a3d8c96fbe51fde47fa862e9421296839e"

S = "${WORKDIR}/${SRC_NAME}-${PV}"