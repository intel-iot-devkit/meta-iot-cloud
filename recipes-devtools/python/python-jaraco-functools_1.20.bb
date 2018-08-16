inherit pypi setuptools
require python-jaraco-functools.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-lang \
	${PYTHON_PN}-textutils \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-backports-functools-lru-cache \
"
