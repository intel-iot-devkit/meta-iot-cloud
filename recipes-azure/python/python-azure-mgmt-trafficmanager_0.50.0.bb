inherit setuptools
require python-azure-mgmt-trafficmanager.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-enum34 \
"