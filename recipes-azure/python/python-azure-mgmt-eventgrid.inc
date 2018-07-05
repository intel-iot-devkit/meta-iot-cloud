DESCRIPTION = "Microsoft Azure EventGrid Management Client Library for Python"

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

SRC_URI[md5sum] = "f384a3b486008ff2bf3e3da968fc6363"
SRC_URI[sha256sum] = "824503b668137affa5b3782c6348c0bb6ab012c72fe47a3be9942c5639f82f8a"