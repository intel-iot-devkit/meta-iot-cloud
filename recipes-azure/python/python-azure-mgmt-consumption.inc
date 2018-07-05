DESCRIPTION = "Microsoft Azure Consumption Management Client Library for Python"

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

SRC_URI[md5sum] = "ccf5984c426ae988d76a0a0951da1b80"
SRC_URI[sha256sum] = "9a85a89f30f224d261749be20b4616a0eb8948586f7f0f20573b8ea32f265189"