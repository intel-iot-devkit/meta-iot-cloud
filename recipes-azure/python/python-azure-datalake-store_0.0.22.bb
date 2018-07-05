inherit pypi setuptools
require python-azure-datalake-store.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-contextlib \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-enum34 \
	${PYTHON_PN}-futures \
	${PYTHON_PN}-pathlib2 \
"
