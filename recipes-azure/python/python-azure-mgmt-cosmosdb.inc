DESCRIPTION = "Microsoft Azure Cosmos DB Management Client Library for Python"

PR = "r0"

require azure-mgmt-common.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-netclient \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-msrestazure \
"

PYPI_PACKAGE_EXT = "zip"

inherit pypi

SRC_URI[md5sum] = "68ca071becc789ad054717a801396845"
SRC_URI[sha256sum] = "a6e70527994d8ce7f4eeca80c7691bc9555adf90819848a9a30284a33b0cffe2"