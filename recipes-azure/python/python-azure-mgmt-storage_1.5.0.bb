inherit setuptools
require python-azure-mgmt-storage.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-enum34 \
"
