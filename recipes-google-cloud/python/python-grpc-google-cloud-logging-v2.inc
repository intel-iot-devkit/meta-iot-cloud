DESCRIPTION = "GRPC library for the Stackdriver Logging service"
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

SRC_NAME = "grpc-google-cloud-logging-v2"

SRC_URI = "https://pypi.python.org/packages/59/79/712ee9277d4f20fa5e53d301934ef4b3124ead111cf35db5d5cbb405c398/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "e0b6bfeaed6dac053d0e02b2b0032c8d"
SRC_URI[sha256sum] = "8788332e13ee84f02fdc0e4eb50b9a0d65e76f6e6250e0b44129037497eac7de"

S = "${WORKDIR}/${SRC_NAME}-${PV}"