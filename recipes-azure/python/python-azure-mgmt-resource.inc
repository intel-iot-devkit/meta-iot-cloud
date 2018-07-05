DESCRIPTION = "Microsoft Azure Resource Management Client Library for Python"

PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-netclient \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-msrestazure \
"

require azure-mgmt-common.inc

PYPI_PACKAGE_EXT = "zip"

inherit pypi

SRC_URI[md5sum] = "184d271704e9883b69ac8859bbde7a6d"
SRC_URI[sha256sum] = "fe65dc43c8643a8c3e731783e98334258bf5dc57cf4ae063401e2b05b9d71d71"