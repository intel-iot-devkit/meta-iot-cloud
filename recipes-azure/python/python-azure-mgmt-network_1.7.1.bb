inherit setuptools
require python-azure-mgmt-network.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-enum34 \
"