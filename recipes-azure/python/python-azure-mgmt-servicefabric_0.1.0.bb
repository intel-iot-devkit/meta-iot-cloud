inherit setuptools
require python-azure-mgmt-servicefabric.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-enum34 \
"