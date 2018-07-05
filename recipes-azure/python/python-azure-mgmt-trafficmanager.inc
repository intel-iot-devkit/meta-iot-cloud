DESCRIPTION = "Microsoft Azure Traffic Manager Client Library for Python"

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

SRC_URI[md5sum] = "27ed3ca664448e675b96e4022c3cbb40"
SRC_URI[sha256sum] = "126167eaa82b443b5b71394050ec292f45074701232bdbdda71f636e9b46516b"