inherit setuptools
require python-azure-mgmt-msi.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-enum34 \
"
