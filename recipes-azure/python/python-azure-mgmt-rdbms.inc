DESCRIPTION = "Microsoft Azure RDBMS Management Client Library for Python"

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

SRC_URI[md5sum] = "4747d5c02737163f3da18b6569d1ef56"
SRC_URI[sha256sum] = "6e5abef2fcac1149dda1119443ea26c847e55e8b4c771b7b033f92d1b3140263"