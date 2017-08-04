DESCRIPTION = "GAPIC library for the Google Cloud Datastore API"
HOMEPAGE = "https://github.com/googleapis/googleapis"
AUTHOR = "Google Inc"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=2deedbf0e737771f60166811e74a6a92"

RDEPENDS_${PN} += " \
	${PYTHON_PN}-google-gax \
	${PYTHON_PN}-oauth2client \
	${PYTHON_PN}-proto-google-cloud-datastore-v1 \
	${PYTHON_PN}-googleapis-common-protos \
"

PR = "r0"

SRC_NAME = "gapic-google-cloud-datastore-v1"

SRC_URI = "https://pypi.python.org/packages/18/11/210497efaf6b9f989a5641184bb78e2883727e2e70cde214e9f2993267b1/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "a3b47a8f7684c871eba3344bf2790a26"
SRC_URI[sha256sum] = "a8968d6ebb7394745e60c79adaf2fa219fc2d25fe75cbcabc01cb6176231bcd6"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
