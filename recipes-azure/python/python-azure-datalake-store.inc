DESCRIPTION = "AutoRest swagger generator Python client runtime."
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/msrest-for-python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://License.txt;md5=8044bfe96e0a6b1824adf55d45c9873b"

PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-cffi \
	${PYTHON_PN}-adal \
	${PYTHON_PN}-msrest \
"

SRC_URI = "git://github.com/Azure/azure-data-lake-store-python.git"
SRCREV = "d18e47dcbe4d1e9d7d6a9ecef72448abf6a5c325"

S = "${WORKDIR}/git"

do_compile_prepend() {
	# Fix incorrect operators
	if [ -e setup.py ]; then
		sed -i -- 's/~=/>=/g' setup.py
	fi
}

distutils_do_install_append() {
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/__init__.py
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/__init__.pyc
}
