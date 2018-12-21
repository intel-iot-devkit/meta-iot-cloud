DESCRIPTION = "GAPIC library for the Cloud Spanner Database Admin API"
HOMEPAGE = "https://github.com/googleapis/googleapis"
AUTHOR = "Google Inc"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=2deedbf0e737771f60166811e74a6a92"

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-google-gax \
    ${PYTHON_PN}-oauth2client \
    ${PYTHON_PN}-proto-google-cloud-spanner-admin-database-v1 \
    ${PYTHON_PN}-googleapis-common-protos \
    ${PYTHON_PN}-grpc-google-iam-v1 \
"

PR = "r0"

SRC_NAME = "gapic-google-cloud-spanner-admin-database-v1"

SRC_URI = "https://pypi.python.org/packages/ae/f5/6793b06c02e7a9a0a9744188214920b5c9f5c6f3e6179c13ea5c3cd937ff/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "7ed1f399336df67ab41e96b9feec19b8"
SRC_URI[sha256sum] = "19b3f4d78a29140d730b1da12842380961336cb7788cf44b9a6c0c9f0529c676"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
