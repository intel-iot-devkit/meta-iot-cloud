inherit pypi setuptools
require python-msrest.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-contextlib \
	${PYTHON_PN}-lang \
	${PYTHON_PN}-threading \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-enum34 \
	${PYTHON_PN}-typing \
"
