inherit pypi setuptools
require python-msrestazure.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-threading \
"