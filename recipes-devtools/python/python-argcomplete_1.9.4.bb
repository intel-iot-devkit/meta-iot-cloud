inherit pypi setuptools
require python-argcomplete.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-argparse \
	${PYTHON_PN}-codecs \
	${PYTHON_PN}-contextlib \
	${PYTHON_PN}-subprocess \
"