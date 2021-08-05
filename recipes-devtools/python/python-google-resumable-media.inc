DESCRIPTION = "Utilities for Google Media Downloads and Resumable Uploads"
HOMEPAGE = "https://github.com/googleapis/google-resumable-media-python"
AUTHOR = "Google Cloud Platform"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

inherit pypi

PR = "r0"

RDEPENDS:${PN} += "\
    ${PYTHON_PN}-crypt \
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-logging \
    ${PYTHON_PN}-math \
    ${PYTHON_PN}-netclient \
"

RDEPENDS:${PN} += "\
    ${PYTHON_PN}-aiohttp \
    ${PYTHON_PN}-google-crc32c \
    ${PYTHON_PN}-six \
"

SRC_URI[sha256sum] = "dcdab13e95bc534d268f87d5293e482cce5bc86dfce6ca0f2e2e89cbb73ef38c"

