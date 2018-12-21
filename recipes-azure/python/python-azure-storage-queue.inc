DESCRIPTION = "Microsoft Azure Storage Queue Client Library for Python"

PR = "r0"

SRC_NAME = "queue"

require azure-storage-common.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-netclient \
    ${PYTHON_PN}-xml \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-common \
    ${PYTHON_PN}-azure-storage-common \
    ${PYTHON_PN}-cryptography \
    ${PYTHON_PN}-dateutil \
"

SRC_URI[md5sum] = "c51919c82bee038288237db6868a773e"
SRC_URI[sha256sum] = "3a170b87e5ddfc3de61ede9597e52a5bbcd0e70cce4818e1cbd84b62d7b89d9e"