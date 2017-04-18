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

SRC_URI = "git://github.com/derekbekoe/azure-multiapi-storage-python.git"
SRCREV = "b0242f38e11a9962f7e7254459d168fa71d13983"

S = "${WORKDIR}/git"

distutils_do_install_append() {
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/__init__.py
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/__init__.pyc
}
