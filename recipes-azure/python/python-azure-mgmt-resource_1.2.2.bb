inherit setuptools
require python-azure-mgmt-resource.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-enum34 \
"