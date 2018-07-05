inherit setuptools
require python-azure-mgmt-devtestlabs.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-enum34 \
"