inherit pypi setuptools
require python-knack.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-argparse \
    ${PYTHON_PN}-lang \
    ${PYTHON_PN}-textutils \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-enum34 \
"