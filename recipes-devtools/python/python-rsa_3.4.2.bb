inherit pypi setuptools
require python-rsa.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-lang \
	${PYTHON_PN}-textutils \
	${PYTHON_PN}-zlib \
"