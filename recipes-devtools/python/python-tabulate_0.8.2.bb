inherit pypi setuptools
require python-tabulate.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-lang \
	${PYTHON_PN}-math \
	${PYTHON_PN}-textutils \
"
