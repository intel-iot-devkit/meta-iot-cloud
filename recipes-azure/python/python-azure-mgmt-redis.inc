DESCRIPTION = "Microsoft Azure Redis Cache Management Client Library for Python"

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

SRC_URI[md5sum] = "7d64e4ce93aa9499906da5abfce4f52c"
SRC_URI[sha256sum] = "374a267b83ec4e71077b8afad537863fb93816c96407595cdd02973235356ded"