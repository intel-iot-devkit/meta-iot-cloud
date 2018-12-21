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
SRC_URI = "https://pypi.python.org/packages/96/6a/34759a4a2119a8aae0b19d045917ee4a39ffaaeda2df3a892730fdcda408/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "9aaee9e196555a6f12e09e0e8db301d6"
SRC_URI[sha256sum] = "f94cc66efba677a086b8b17b1240239433495b77631cd410f70151a8ff14435d"

S = "${WORKDIR}/${SRC_NAME}-${PV}"
