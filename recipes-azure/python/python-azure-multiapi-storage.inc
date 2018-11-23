DESCRIPTION = "Microsoft Azure Storage Client Library for Python with multi API version support."
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/derekbekoe/azure-multiapi-storage-python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=6d300361524dd434bb22d8633716c418"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-nspkg \
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-cryptography \
	${PYTHON_PN}-dateutil \
	${PYTHON_PN}-requests \
"

SRC_URI = "git://github.com/Azure/azure-multiapi-storage-python.git"
SRCREV = "d4329a838f7d2fa6f0dab584274fd1bd3e77bcc4"

S = "${WORKDIR}/git"
