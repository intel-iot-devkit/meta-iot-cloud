DESCRIPTION = "Microsoft Azure Monitor Management Client Library for Python"

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

SRC_URI[md5sum] = "d3cbcf3900557aa2e98d8304bf887516"
SRC_URI[sha256sum] = "f1a58d483e3292ba4f7bbf3104573130c9265d6c9262e26b60cbfa950b5601e4"