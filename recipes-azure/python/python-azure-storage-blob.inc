DESCRIPTION = "Microsoft Azure Storage Blob Client Library for Python"

PR = "r0"

SRC_NAME = "blob"

require azure-storage-common.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-math \
	${PYTHON_PN}-xml \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-storage-common \
	${PYTHON_PN}-cryptography \
	${PYTHON_PN}-dateutil \
"

SRC_URI[md5sum] = "94b5b39a7450fd20568e771e7372f576"
SRC_URI[sha256sum] = "35f0581d5a98a63b5004dca1fb2d9e73ed3fe1dcdd5f41376ccdbf0684bc6275"
