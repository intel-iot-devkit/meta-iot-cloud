DESCRIPTION = "Microsoft Azure DNS Management Client Library for Python"

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

SRC_URI[md5sum] = "c9ce0e2986106022496f44f2436c3ac4"
SRC_URI[sha256sum] = "676cdcd2b83bd4b24782047ec4395657103ea89dacdcf824cf9ed8eb5584d1bf"