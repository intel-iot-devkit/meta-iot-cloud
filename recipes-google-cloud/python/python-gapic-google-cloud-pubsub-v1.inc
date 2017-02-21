DESCRIPTION = "GAPIC library for the Google Cloud Pub/Sub API"
HOMEPAGE = "https://github.com/googleapis/googleapis"
AUTHOR = "Google Inc"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=2deedbf0e737771f60166811e74a6a92"

RDEPENDS_${PN} += " \
	${PYTHON_PN}-googleapis-common-protos \
	${PYTHON_PN}-grpc-google-iam-v1 \
	${PYTHON_PN}-google-gax \
	${PYTHON_PN}-proto-google-cloud-pubsub-v1 \
	${PYTHON_PN}-oauth2client \
"

PR = "r0"

SRC_NAME = "gapic-google-cloud-pubsub-v1"

SRC_URI = "https://pypi.python.org/packages/6e/69/1dd9d0806100d18f5947eeaaff56f3fe6e6a18d174f6c9b04b6acd7c1fa4/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "595e673b41664875c7b28c96efd8d048"
SRC_URI[sha256sum] = "d4b0ef19593d9da64c32ee803805db2b9a11a93fce0b4c14e67c16238fdf57aa"

S = "${WORKDIR}/${SRC_NAME}-${PV}"