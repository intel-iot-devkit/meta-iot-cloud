DESCRIPTION = "GRPC library for the Google Cloud Pub/Sub API"
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

SRC_NAME = "proto-google-cloud-pubsub-v1"

SRC_URI = "https://pypi.python.org/packages/c0/a2/2eeffa0069830f00016196dfdd69491cf562372b5353f2e8e378b3c2cb0a/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "1ee8cce13dbb02ad404eb97148de0404"
SRC_URI[sha256sum] = "74549d55cd492744cff255e8ab2c4df81153be06c08fb6345131fd034976d235"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
