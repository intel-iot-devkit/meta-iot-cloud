DESCRIPTION = "Microsoft Azure Compute Management Client Library for Python"

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

SRC_URI[md5sum] = "589ee66d8a3bc950487b6708d8b10f47"
SRC_URI[sha256sum] = "7a28dbef42c4cfe70d9b3a9e9371668f0f448d343136ce98095b503a3085d854"