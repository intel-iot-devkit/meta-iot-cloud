DESCRIPTION = "Google Cloud API client core library"
HOMEPAGE = "https://github.com/GoogleCloudPlatform/google-cloud-python"
AUTHOR = "Google LLC"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

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

SRC_URI[md5sum] = "cbc42a01af32bd31323db111e827d3f3"
SRC_URI[sha256sum] = "10750207c1a9ad6f6e082d91dbff3920443bdaf1c344a782730489a9efa802f1"

