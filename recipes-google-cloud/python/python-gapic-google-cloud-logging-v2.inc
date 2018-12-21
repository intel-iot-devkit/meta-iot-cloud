DESCRIPTION = "GAPIC library for the Stackdriver Logging API"
HOMEPAGE = "https://github.com/googleapis/googleapis"
AUTHOR = "Google Inc"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=2deedbf0e737771f60166811e74a6a92"

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-google-gax \
    ${PYTHON_PN}-oauth2client \
    ${PYTHON_PN}-proto-google-cloud-logging-v2 \
    ${PYTHON_PN}-googleapis-common-protos \
"

PR = "r0"

SRC_NAME = "gapic-google-cloud-logging-v2"

SRC_URI = "https://pypi.python.org/packages/aa/a8/2fcb30c255243d0b5b1a1c4b3cd0a73ca87c82f8a6673be60fb003a6e184/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "dcfe146db3382719f54e987498dd94f3"
SRC_URI[sha256sum] = "b0b87bf56c50e4617fb539e5c36f2e286ba87c67a9b1ef5c9ec854d6d7b10023"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
