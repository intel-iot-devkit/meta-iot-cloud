DESCRIPTION = "Azure DocumentDB Python SDK"
AUTHOR = "Microsoft"
HOMEPAGE = "https://github.com/Azure/azure-documentdb-python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=35b5a4b284dcca8dda38949854025b46"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-six \
	${PYTHON_PN}-requests \
"

SRC_URI = "git://github.com/Azure/azure-documentdb-python.git"
SRCREV = "e3d89e64ecd3792de5a4f257d40d05b534dde40c"

PR = "r0"

S = "${WORKDIR}/git"
