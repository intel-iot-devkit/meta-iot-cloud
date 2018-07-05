DESCRIPTION = "Microsoft Azure Storage Management Client Library for Python"

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

SRC_URI[md5sum] = "071aa80f61b1297c66b1b5c0efa25b3d"
SRC_URI[sha256sum] = "b1fc3a293051dee35dffe12d618f925581d6536c94ca5c05b69461ce941125a1"
