DESCRIPTION = "Google Cloud Pub/Sub API client library"
HOMEPAGE = "https://github.com/googleapis/python-pubsub"
AUTHOR = "Google LLC"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=7b7e367c7e1664e6565ee7d16cccc58a"

inherit pypi

PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-asyncio \
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-distutils \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-logging \
    ${PYTHON_PN}-math \
    ${PYTHON_PN}-netclient \
    ${PYTHON_PN}-typing \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-google-api-core \
    ${PYTHON_PN}-grpc-google-iam-v1 \
    ${PYTHON_PN}-libcst \
    ${PYTHON_PN}-proto-plus \
"

SRC_URI[sha256sum] = "42b07d8652f0ff0d118430a04abc19ee1f6fd85ccbfe86fcbb01bf487079a80c"
