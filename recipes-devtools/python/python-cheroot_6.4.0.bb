inherit pypi setuptools
require python-cheroot.inc

RDEPENDS_${PN} += " \
	${PYTHON_PN}-argparse \
	${PYTHON_PN}-contextlib \
	${PYTHON_PN}-threading \
"

RDEPENDS_${PN} += " \
	${PYTHON_PN}-backports-functools-lru-cache \
"
