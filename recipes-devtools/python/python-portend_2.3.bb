inherit pypi setuptools
require python-portend.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-argparse \
    ${PYTHON_PN}-contextlib \
"
