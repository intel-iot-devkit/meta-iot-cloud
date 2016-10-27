inherit setuptools
require python-msrest.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-enum34 \
"
