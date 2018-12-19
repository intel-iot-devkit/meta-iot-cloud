inherit setuptools
require python-argcomplete.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-argparse \
	${PYTHON_PN}-contextlib \
"
