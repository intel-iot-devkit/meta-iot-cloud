DESCRIPTION = "Cloud IoT API API client library"
HOMEPAGE = "https://github.com/googleapis/python-iot"
AUTHOR = "Google LLC"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=7b7e367c7e1664e6565ee7d16cccc58a"

inherit pypi

PR = "r0"

RDEPENDS:${PN} += "\
    ${PYTHON_PN}-google-api-core \
    ${PYTHON_PN}-grpc-google-iam-v1 \
    ${PYTHON_PN}-libcst \
    ${PYTHON_PN}-proto-plus \
"

SRC_URI[sha256sum] = "8af2be9c74697a350d5cc8ead00ae6cb4e85943564f1d782e8060d0d5eb15723"
