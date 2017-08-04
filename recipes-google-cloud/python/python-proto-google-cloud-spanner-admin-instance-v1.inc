DESCRIPTION = "GRPC library for the Cloud Spanner Instance Admin API"
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

SRC_NAME = "proto-google-cloud-spanner-admin-instance-v1"

SRC_URI = "https://pypi.python.org/packages/94/74/ff6bd062a26f971cd92f735449f47cefb94ef25b1051304cb54171c038f8/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "dce03de4f17858d5998840cc87a701e0"
SRC_URI[sha256sum] = "94a45ae0f951575bc05c48e7384cd25bfe0f951f14ee3f1732915efb0f1a0028"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
