DESCRIPTION = "Microsoft Azure Storage Common Client Library for Python"

PR = "r0"

SRC_NAME = "common"

require azure-storage-common.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-crypt \
    ${PYTHON_PN}-datetime \
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-logging \
    ${PYTHON_PN}-math \
    ${PYTHON_PN}-misc \
    ${PYTHON_PN}-netclient \
    ${PYTHON_PN}-xml \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-common \
    ${PYTHON_PN}-cryptography \
    ${PYTHON_PN}-dateutil \
    ${PYTHON_PN}-requests \
"

SRC_URI[md5sum] = "79c78ff37796d4481e83765d64c66c21"
SRC_URI[sha256sum] = "585658ebc784e843a285732a69aa69ef922e17c3063460c2c7b27c89f377004c"
