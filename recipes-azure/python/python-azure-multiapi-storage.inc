DESCRIPTION = "Microsoft Azure Storage Client Library for Python with multi API version support."
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/azure-multiapi-storage-python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://setup.py;beginline=3;endline=16;md5=10a96b36fc766c80cc19f09ec8d7a77a"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-crypt \
	${PYTHON_PN}-datetime \
	${PYTHON_PN}-io \
	${PYTHON_PN}-json \
	${PYTHON_PN}-logging \
	${PYTHON_PN}-math \
	${PYTHON_PN}-misc \
	${PYTHON_PN}-netclient \
	${PYTHON_PN}-threading \
	${PYTHON_PN}-xml \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-nspkg \
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-cryptography \
	${PYTHON_PN}-dateutil \
	${PYTHON_PN}-requests \
"

SRC_URI[md5sum] = "1462b7f773e523363dc58504d700fc20"
SRC_URI[sha256sum] = "97c7b322471e96d869dd8006ecb0678b9bd3da2f6a234ee1fbc07b67ea3782c0"
