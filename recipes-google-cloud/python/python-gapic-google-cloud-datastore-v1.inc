DESCRIPTION = "GAPIC library for the Google Cloud Datastore API"
HOMEPAGE = "https://github.com/googleapis/googleapis"
AUTHOR = "Google Inc"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=2deedbf0e737771f60166811e74a6a92"

RDEPENDS_${PN} += " \
	${PYTHON_PN}-googleapis-common-protos \
	${PYTHON_PN}-google-gax \
	${PYTHON_PN}-proto-google-cloud-datastore-v1 \
	${PYTHON_PN}-grpc-google-cloud-datastore-v1 \
	${PYTHON_PN}-oauth2client \
"

PR = "r0"

SRC_NAME = "gapic-google-cloud-datastore-v1"

SRC_URI = "https://pypi.python.org/packages/a5/39/eaa0a8888e8b60f2627daebd8656c6b40e2873097dc891a57e4c008730c2/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "19485e1764f419f488acf644c9966bd1"
SRC_URI[sha256sum] = "c15521a5a866866d1ac1a83cfb51f34449ab1a6467751828c2205ca4ae7ca466"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
