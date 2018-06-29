inherit pypi setuptools
require python-paramiko.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-lang \
	${PYTHON_PN}-subprocess \
	${PYTHON_PN}-threading \
"