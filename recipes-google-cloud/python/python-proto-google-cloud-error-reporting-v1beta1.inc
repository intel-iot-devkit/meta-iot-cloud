DESCRIPTION = "GRPC library for the Stackdriver Error Reporting API"
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

SRC_NAME = "proto-google-cloud-error-reporting-v1beta1"

SRC_URI = "https://pypi.python.org/packages/4c/a1/94790efc86414a127fdf2c1277530c789b458bdd4b120630d4d84ea04898/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "68b7a4bad82eef59e15bc27bc7584fa3"
SRC_URI[sha256sum] = "8082a9f2241f31a97b749551cf6ab848b92f5abf75f632746f223031fed35b39"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
