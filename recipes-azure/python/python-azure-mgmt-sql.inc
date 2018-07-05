DESCRIPTION = "Microsoft Azure SQL Management Client Library for Python"

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

SRC_URI[md5sum] = "dae0c0337276f44e56b47934335a48ae"
SRC_URI[sha256sum] = "5da488a56d5265757b45747cf5fd22413eb089e606658d6e6d84fe3e9b07e4fa"