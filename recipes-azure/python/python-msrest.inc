DESCRIPTION = "AutoRest swagger generator Python client runtime."
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/msrest-for-python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.md;md5=9714a4db9af8ac45d4777b479c5401ca"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-requests \
	${PYTHON_PN}-requests-oauthlib \
	${PYTHON_PN}-isodate \
	${PYTHON_PN}-certifi \
"

PR = "r0"

SRC_NAME = "msrest-for-python"

SRC_URI = "git://github.com/Azure/${SRC_NAME}.git"
SRCREV = "a34b2d5521e9fa12f3b9d40c42ed783c06afedf1"

S = "${WORKDIR}/git"

do_compile_prepend() {
	# Fix incorrect operators
	if [ -e setup.py ]; then
		sed -i -- 's/~=/>=/g' setup.py
	fi
}

BBCLASSEXTEND = "native nativesdk"
