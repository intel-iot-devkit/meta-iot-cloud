DESCRIPTION = "Microsoft Azure Management Groups Client Library for Python"

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

SRC_URI[md5sum] = "4b8a8081a8f1a8609fe0118f79615076"
SRC_URI[sha256sum] = "ff62d982edda634a36160cb1d15a367a9572a5acb419e5e7ad371e8c83bd47c7"