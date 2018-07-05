inherit pypi setuptools
require python-azure-cli-iot.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-argparse \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-enum34 \
"