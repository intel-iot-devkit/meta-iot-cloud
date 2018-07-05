inherit setuptools
require python-azure-mgmt-managementgroups.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-enum34 \
"