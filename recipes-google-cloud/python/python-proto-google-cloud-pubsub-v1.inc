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

SRC_URI = "https://pypi.python.org/packages/d0/2b/cf923d84853e4fdd0803015990148a2ca0c42371e6430528b8ea0f79ad52/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "cc8b4af1dd21b050776fcd8bdaa3384b"
SRC_URI[sha256sum] = "99b780ea35d81dce2311cd0a5eab07972bdaf48d448e417632e0df30572754ea"

S = "${WORKDIR}/${SRC_NAME}-${PV}"

# Temporary patch until this is fixed upstream
do_compile_prepend() {
	# Fix requires list
	if [ -e setup.py ]; then
		sed -i -- '13s/$/,/' setup.py
	fi
}
