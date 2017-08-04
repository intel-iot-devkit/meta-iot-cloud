DESCRIPTION = "GRPC library for the Google Cloud Datastore API"
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

SRC_NAME = "proto-google-cloud-datastore-v1"

SRC_URI = "https://pypi.python.org/packages/2a/1f/4124f15e1132a2eeeaf616d825990bb1d395b4c2c37362654ea5cd89bb42/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "552c85af00831db40cf4f2db1c160f0f"
SRC_URI[sha256sum] = "a431bb6a286107900c9ce3c48d316378867293c50a4d8a6c7393264600e916f9"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
