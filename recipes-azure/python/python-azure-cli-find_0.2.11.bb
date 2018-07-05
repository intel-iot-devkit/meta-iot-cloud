inherit pypi setuptools
require python-azure-cli-find.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-textutils \
"