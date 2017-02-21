DESCRIPTION = "GAPIC library for the Stackdriver Logging API"
HOMEPAGE = "https://github.com/googleapis/googleapis"
AUTHOR = "Google Inc"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=2deedbf0e737771f60166811e74a6a92"

RDEPENDS_${PN} += " \
	${PYTHON_PN}-googleapis-common-protos \
	${PYTHON_PN}-google-gax \
	${PYTHON_PN}-grpc-google-cloud-logging-v2 \
	${PYTHON_PN}-oauth2client \
"

PR = "r0"

SRC_NAME = "gapic-google-cloud-logging-v2"

SRC_URI = "https://pypi.python.org/packages/1c/af/8748cb02b4a00a80606398bf8e85509a42c5f20baaf6022ef2f603a8a74b/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "99def570fc8afa225d25632b5c126200"
SRC_URI[sha256sum] = "10c294f397900190760c089462a9195eb89934901f7d701fb23d2de7a71f4352"

S = "${WORKDIR}/${SRC_NAME}-${PV}"