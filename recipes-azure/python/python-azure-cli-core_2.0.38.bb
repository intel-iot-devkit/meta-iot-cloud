inherit pypi setuptools
require python-azure-cli-core.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-argparse \
	${PYTHON_PN}-lang \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-enum34 \
"
