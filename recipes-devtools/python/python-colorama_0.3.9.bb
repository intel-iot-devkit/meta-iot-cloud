inherit pypi setuptools
require python-colorama.inc

REQUIRES_${PN} += "\
	${PYTHON_PN}-contextlib \
"
