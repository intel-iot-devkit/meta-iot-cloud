DESCRIPTION = "GRPC library for the Stackdriver Logging API"
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

SRC_NAME = "proto-google-cloud-logging-v2"

SRC_URI = "https://pypi.python.org/packages/36/cc/52c1b363b992546d4658a61eb551c85af94ad424734e6c899fdfc8330811/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "02a7f7a8689394a2740f2b45dff264b1"
SRC_URI[sha256sum] = "e0538745f0f33760ffd5116f33385113835a3b2042a6c914923be0539e5280ce"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
