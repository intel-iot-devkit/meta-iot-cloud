DESCRIPTION = "GAPIC library for the Google Cloud Pub/Sub API"
HOMEPAGE = "https://github.com/googleapis/googleapis"
AUTHOR = "Google Inc"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=2deedbf0e737771f60166811e74a6a92"

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-google-gax \
    ${PYTHON_PN}-oauth2client \
    ${PYTHON_PN}-proto-google-cloud-pubsub-v1 \
    ${PYTHON_PN}-googleapis-common-protos \
    ${PYTHON_PN}-grpc-google-iam-v1 \
"

PR = "r0"

SRC_NAME = "gapic-google-cloud-pubsub-v1"

SRC_URI = "https://pypi.python.org/packages/bc/a7/0225bd7a95e037a0afa90b2dd9534d0c79cd62283a5bddb30a3197579cbc/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "07b22de5262aba375b020b87daaa4c0b"
SRC_URI[sha256sum] = "a8cd1d89542085e3b05ca15632b9067a1e45f8c98eb05f3e3ffc25129c694745"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
