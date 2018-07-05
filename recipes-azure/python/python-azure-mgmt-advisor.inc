DESCRIPTION = "Microsoft Azure Advisor Client Library for Python"

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

SRC_URI[md5sum] = "19967727329c03de88011b46718fed35"
SRC_URI[sha256sum] = "8fdcb41f760a216e6b835eaec11dba61822777b386139d83eee31f0ff63b05da"
