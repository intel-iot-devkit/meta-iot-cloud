DESCRIPTION = "Microsoft Azure Media Services Management Client Library for Python"

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

SRC_URI[md5sum] = "ffe21f73b637a9c9a86840de7878e3c9"
SRC_URI[sha256sum] = "656181ee580ff9a6e15cdd5db16e9adfc98b6f39c5108181c36a7ec825fccb87"
