inherit setuptools
require python-azure-mgmt-sql.inc


RDEPENDS_${PN} += "\
	${PYTHON_PN}-enum34 \
"