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

SRC_URI = "https://pypi.python.org/packages/ff/43/6cadc2b700dbce3ae77b573c40bd7c324778cf32c82e3471ffa761f6088c/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "1a2eaf7c1f73ededff023ff8bb2f59a5"
SRC_URI[sha256sum] = "8082a9f2241f31a97b749551cf6ab848b92f5abf75f632746f223031fed35b39"

S = "${WORKDIR}/${SRC_NAME}-${PV}"