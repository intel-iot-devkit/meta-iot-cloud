DESCRIPTION = "Google Cloud Storage API client library"
HOMEPAGE = "https://github.com/GoogleCloudPlatform/google-cloud-python"
AUTHOR = "Google LLC"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=7b7e367c7e1664e6565ee7d16cccc58a"

inherit pypi

PR = "r0"

RDEPENDS:${PN} += "\
    ${PYTHON_PN}-crypt \
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-email \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-logging \
    ${PYTHON_PN}-netclient \
"

RDEPENDS:${PN} += "\
    ${PYTHON_PN}-google-auth \
    ${PYTHON_PN}-google-cloud-core \
    ${PYTHON_PN}-google-resumable-media \
    ${PYTHON_PN}-requests \
"

SRC_URI[sha256sum] = "da12b7bd79bbe978a7945a44b600604fbc10ece2935d31f243e751f99135e34f"
