DESCRIPTION = "Microsoft Azure Network Management Client Library for Python"

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

SRC_URI[md5sum] = "e19b92d147fbf527dea73539e39e1b7d"
SRC_URI[sha256sum] = "ddfff3dd31c7329b26f282615b719e7030c5206e56951daae4f180957c1e5201"