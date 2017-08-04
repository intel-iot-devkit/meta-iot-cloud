DESCRIPTION = "GAPIC library for the Cloud Spanner Instance Admin API"
HOMEPAGE = "https://github.com/googleapis/googleapis"
AUTHOR = "Google Inc"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=2deedbf0e737771f60166811e74a6a92"

RDEPENDS_${PN} += " \
	${PYTHON_PN}-google-gax \
	${PYTHON_PN}-oauth2client \
	${PYTHON_PN}-proto-google-cloud-spanner-admin-instance-v1 \
	${PYTHON_PN}-googleapis-common-protos \
	${PYTHON_PN}-grpc-google-iam-v1 \
"

PR = "r0"

SRC_NAME = "gapic-google-cloud-spanner-admin-instance-v1"

SRC_URI = "https://pypi.python.org/packages/7f/80/47cc217a14fcbfc85ab316077f9f92d06ddd08cec14c60d1d77e4c370d50/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "a49f8224378c705a8793df9a56f3e66f"
SRC_URI[sha256sum] = "1e88bc03dbd6137964dcc0dacb8df35c09a8ddf86625ad5a712bc509a97476f7"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
