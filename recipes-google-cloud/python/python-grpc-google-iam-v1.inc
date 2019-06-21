DESCRIPTION = "GRPC library for the google-iam-v1 service"
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

SRC_NAME = "grpc-google-iam-v1"

SRC_URI = "https://files.pythonhosted.org/packages/9b/28/f26f67381cb23e81271b8d66c00a846ad9d25a909ae1ae1df8222fad2744/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "8ead45e8fc38ade73896b98802c9c84f"
SRC_URI[sha256sum] = "5009e831dcec22f3ff00e89405249d6a838d1449a46ac8224907aa5b0e0b1aec"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
