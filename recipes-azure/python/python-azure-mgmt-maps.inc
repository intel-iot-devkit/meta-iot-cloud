DESCRIPTION = "Microsoft Azure Maps Client Library for Python"

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

SRC_URI[md5sum] = "fb05290a0f86e20f412cc0b9d765dfa9"
SRC_URI[sha256sum] = "c120e210bb61768da29de24d28b82f8d42ae24e52396eb6569b499709e22f006"