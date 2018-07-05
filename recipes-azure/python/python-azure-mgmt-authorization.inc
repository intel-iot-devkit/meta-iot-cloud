DESCRIPTION = "Microsoft Azure Authorization Management Client Library for Python"

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

SRC_URI[md5sum] = "8ee68c833ecf17150f953b05dfeee0c2"
SRC_URI[sha256sum] = "535de12ff4f628b62b939ae17cc6186226d7783bf02f242cdd3512ee03a6a40e"