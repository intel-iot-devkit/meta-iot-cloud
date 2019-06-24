DESCRIPTION = "Google Cloud API client core library"
HOMEPAGE = "https://github.com/GoogleCloudPlatform/google-cloud-python"
AUTHOR = "Google LLC"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=2deedbf0e737771f60166811e74a6a92"

PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-pickle \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-googleapis-common-protos \
    ${PYTHON_PN}-google-api-core \
    ${PYTHON_PN}-google-auth \
    ${PYTHON_PN}-grpcio \
    ${PYTHON_PN}-protobuf \
    ${PYTHON_PN}-six \
"

SRC_URI[md5sum] = "c5cf767200f353a7b87ae0466849e1bd"
SRC_URI[sha256sum] = "7b61a06de4d63780bcf7889cb17f00f5058fdd211ad86c74367408eea37d9f00"
