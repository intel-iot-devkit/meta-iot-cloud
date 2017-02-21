DESCRIPTION = "Common protobufs used in Google APIs"
HOMEPAGE = "https://github.com/googleapis/googleapis"
AUTHOR = "Google Inc"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=2deedbf0e737771f60166811e74a6a92"

RDEPENDS_${PN} += " \
	${PYTHON_PN}-protobuf \
	${PYTHON_PN}-grpcio \
"

PR = "r0"

SRC_NAME = "googleapis-common-protos"

SRC_URI = "https://pypi.python.org/packages/8e/64/9568c7b7da6b10ea1745a182dedec13ee991459d868cb72c2aee781e80cb/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "cb04ff30e827c88e4e7ae0d96d46d118"
SRC_URI[sha256sum] = "8bce753ce88d4a61533b7c1569c94b2f75e07899b598d2ba771ff693087afc43"

S = "${WORKDIR}/${SRC_NAME}-${PV}"