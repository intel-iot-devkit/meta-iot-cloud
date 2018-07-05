DESCRIPTION = "Microsoft Azure Web Apps Resource Management Client Library for Python"

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

SRC_URI[md5sum] = "7c49dea0a3623e2f73b383029308a78d"
SRC_URI[sha256sum] = "8ea0794eef22a257773c13269b94855ab79d36c342ad15a98135403c9785cc0a"
