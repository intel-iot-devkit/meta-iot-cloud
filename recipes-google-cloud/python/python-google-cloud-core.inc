DESCRIPTION = "Google Cloud API client core library"
HOMEPAGE = "https://github.com/googleapis/python-cloud-core"
AUTHOR = "Google LLC"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=7b7e367c7e1664e6565ee7d16cccc58a"

inherit pypi

PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-pickle \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-google-api-core \
    ${PYTHON_PN}-grpcio \
"

SRC_URI[sha256sum] = "21afb70c1b0bce8eeb8abb5dca63c5fd37fc8aea18f4b6d60e803bd3d27e6b80"

