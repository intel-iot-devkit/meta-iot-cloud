DESCRIPTION = "Microsoft Azure Storage File Client Library for Python"

PR = "r0"

SRC_NAME = "file"

require azure-storage-common.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-threading \
    ${PYTHON_PN}-xml \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-common \
    ${PYTHON_PN}-azure-storage-common \
    ${PYTHON_PN}-dateutil \
"

SRC_URI[md5sum] = "3af9f0b61d3987bd49936cb0cb994933"
SRC_URI[sha256sum] = "60843e8e81072e2d932a492490938afa92228bddb2a47006da9c951fb60dfec5"