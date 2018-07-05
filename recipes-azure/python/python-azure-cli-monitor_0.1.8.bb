inherit pypi setuptools
require python-azure-cli-monitor.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-argparse \
"