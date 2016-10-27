HOMEPAGE = "https://github.com/Azure/azure-cli"
AUTHOR = "Microsoft Corporation"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=f74e59e099e328d80285c9eba6d4a53f"

SRC_NAME = "azure-cli"

SRC_URI = "git://github.com/Azure/${SRC_NAME}.git"
SRCREV = "e93bae53b19b1dbc03c21e8e255785e6a2967fec"

S = "${WORKDIR}/git"

distutils_do_compile_prepend() {
	cd ${S}/${SRC_DIR}
}

distutils_do_install_prepend() {
	cd ${S}/${SRC_DIR}
}
