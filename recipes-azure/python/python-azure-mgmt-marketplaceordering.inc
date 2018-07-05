DESCRIPTION = "Microsoft Azure Market Place Ordering Client Library for Python"

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

SRC_URI[md5sum] = "7b6df37339c310793727ed21b43ee359"
SRC_URI[sha256sum] = "6da12425cbab0cc62f246e7266b4d67aff6bdd031ecbe50c7542c2f2b2440ad4"