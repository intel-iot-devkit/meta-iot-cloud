inherit pypi setuptools
require python-azure-cli-interactive.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-argparse \
	${PYTHON_PN}-subprocess \
"