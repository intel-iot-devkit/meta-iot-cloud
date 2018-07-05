inherit setuptools
require python-azure-mgmt-datalake-analytics.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-enum34 \
"