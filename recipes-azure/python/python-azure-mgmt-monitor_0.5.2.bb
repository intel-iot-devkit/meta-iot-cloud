inherit setuptools
require python-azure-mgmt-monitor.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-enum34 \
"