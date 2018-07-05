inherit pypi setuptools
require python-azure-multiapi-storage.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-contextlib \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-futures \
"
