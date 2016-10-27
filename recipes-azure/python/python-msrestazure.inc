DESCRIPTION = "AutoRest swagger generator Python client runtime."
AUTHOR = "Microsoft Corporation"
HOMEPAGE = "https://github.com/Azure/msrestazure-for-python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.md;md5=9714a4db9af8ac45d4777b479c5401ca"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-msrest \
"

SRC_NAME = "msrestazure-for-python"

SRC_URI = "git://github.com/Azure/${SRC_NAME}.git"
SRCREV = "c89da9507cf31fe604154c20a5fd6a56b5dafb82"

S = "${WORKDIR}/git"

BBCLASSEXTEND = "native nativesdk"
