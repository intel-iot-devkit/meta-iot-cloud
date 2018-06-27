inherit pypi setuptools
require python-entrypoints.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-contextlib \
"