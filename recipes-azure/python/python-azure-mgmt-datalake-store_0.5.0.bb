inherit setuptools
require python-azure-mgmt-datalake-store.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-enum34 \
"