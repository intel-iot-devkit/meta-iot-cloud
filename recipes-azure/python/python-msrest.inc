DESCRIPTION = "AutoRest swagger generator Python client runtime."
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/msrest-for-python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.md;md5=9714a4db9af8ac45d4777b479c5401ca"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-requests \
	${PYTHON_PN}-keyring \
	${PYTHON_PN}-requests-oauthlib \
	${PYTHON_PN}-isodate \
	${PYTHON_PN}-certifi \
	${PYTHON_PN}-chardet \
"

SRC_NAME = "msrest-for-python"

SRC_URI = "git://github.com/Azure/${SRC_NAME}.git"
SRCREV = "1110fb394bd5dceeda0b8b3054f83b466b5e3b5f"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
