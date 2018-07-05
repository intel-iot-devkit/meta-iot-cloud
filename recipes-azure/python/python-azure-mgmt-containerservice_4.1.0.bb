inherit setuptools
require python-azure-mgmt-containerservice.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-enum34 \
"