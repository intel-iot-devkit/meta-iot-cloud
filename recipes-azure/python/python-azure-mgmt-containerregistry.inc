DESCRIPTION = "Microsoft Azure Container Registry Client Library for Python"

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

SRC_URI[md5sum] = "2f3cb35fc01418564edab2e8d9a18fdc"
SRC_URI[sha256sum] = "340f71652111747578bc1a2f44c035f7147dc5fe1f23271f02107a7451cb92f2"
