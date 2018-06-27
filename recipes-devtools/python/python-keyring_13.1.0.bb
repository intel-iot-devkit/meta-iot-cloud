inherit pypi setuptools
require python-keyring.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-lang \
	${PYTHON_PN}-textutils \
"