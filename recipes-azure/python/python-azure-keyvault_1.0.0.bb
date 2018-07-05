inherit setuptools
require python-azure-keyvault.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-lang \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-enum34 \
"