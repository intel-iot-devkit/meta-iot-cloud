HOMEPAGE = "https://github.com/Azure/azure-cli"
AUTHOR = "Microsoft Corporation"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=f74e59e099e328d80285c9eba6d4a53f"

SRC_NAME = "azure-cli"

SRC_URI = "git://github.com/Azure/${SRC_NAME}.git"

S = "${WORKDIR}/git"

distutils_do_compile_prepend() {
	cd ${S}/${SRC_DIR}
}

distutils_do_install_prepend() {
	cd ${S}/${SRC_DIR}
}

distutils_do_install_append() {
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/__init__.py
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/__init__.pyc
}
