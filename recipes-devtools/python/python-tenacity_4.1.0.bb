inherit setuptools
require python-tenacity.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-futures \
"
