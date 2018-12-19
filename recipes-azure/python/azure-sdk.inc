HOMEPAGE = "https://github.com/Azure/azure-sdk-for-python"
AUTHOR = "Microsoft Azure"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=7f7cc56311d298677f304d0ffce374d8"

SRC_URI = "git://github.com/Azure/azure-sdk-for-python.git"

S = "${WORKDIR}/git"

distutils_do_compile_prepend() {
	cd ${S}/${SRC_DIR}

	# Fix incorrect operators
	if [ -e setup.py ]; then
		sed -i -- 's/~=/>=/g' setup.py
	fi
}

distutils_do_install_prepend() {
	cd ${S}/${SRC_DIR}
}

distutils3_do_compile_prepend() {
	cd ${S}/${SRC_DIR}

	# Fix incorrect operators
	if [ -e setup.py ]; then
		sed -i -- 's/~=/>=/g' setup.py
	fi
}

distutils3_do_install_prepend() {
	cd ${S}/${SRC_DIR}
}
