inherit pypi setuptools
require python-sshtunnel.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-argparse \
"