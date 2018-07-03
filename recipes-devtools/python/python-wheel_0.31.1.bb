inherit pypi setuptools
require python-wheel.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-argparse \
	${PYTHON_PN}-subprocess \
	${PYTHON_PN}-textutils \
"