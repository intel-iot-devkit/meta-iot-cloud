inherit pypi setuptools
require python-azure-cli-cdn.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-argparse \
"
