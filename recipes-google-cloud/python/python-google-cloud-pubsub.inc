DESCRIPTION = "Google Cloud Pub/Sub API client library"
HOMEPAGE = "https://github.com/GoogleCloudPlatform/google-cloud-python"
AUTHOR = "Google LLC"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=7b7e367c7e1664e6565ee7d16cccc58a"

PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-logging \
    ${PYTHON_PN}-math \
    ${PYTHON_PN}-netclient \
    ${PYTHON_PN}-pkgutil \
    ${PYTHON_PN}-threading \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-googleapis-common-protos \
    ${PYTHON_PN}-google-api-core \
    ${PYTHON_PN}-google-auth \
    ${PYTHON_PN}-grpc-google-iam-v1 \
    ${PYTHON_PN}-grpcio \
    ${PYTHON_PN}-protobuf \
    ${PYTHON_PN}-six \
"

SRC_URI[md5sum] = "a0d46582749e14057da796c9404f466a"
SRC_URI[sha256sum] = "f295d14120f10e638ab4990268707d39f9460bc472145ae05b112f5f144854f0"
