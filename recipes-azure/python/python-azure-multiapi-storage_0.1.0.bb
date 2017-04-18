inherit setuptools
require python-azure-multiapi-storage.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-futures \
"
