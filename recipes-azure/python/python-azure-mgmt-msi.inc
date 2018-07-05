DESCRIPTION = "Microsoft Azure MSI Management Client Library for Python"

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

SRC_URI[md5sum] = "75d770e401f308a3f34d7d07bb6c45b2"
SRC_URI[sha256sum] = "8622bc9a164169a0113728ebe7fd43a88189708ce6e10d4507247d6907987167"