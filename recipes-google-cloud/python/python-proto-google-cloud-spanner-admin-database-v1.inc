DESCRIPTION = "GRPC library for the Cloud Spanner Database Admin API"
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

SRC_NAME = "proto-google-cloud-spanner-admin-database-v1"

SRC_URI = "https://pypi.python.org/packages/c1/fa/9387ff2c024051ec876072aba86fecbdb529470c451fbc42699a2230df5e/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "4832c924974cbae5395a56837c2005a1"
SRC_URI[sha256sum] = "dce717268d831bbbba66bf0be93984863399f401c627499b6d5044f8f0f1c454"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
