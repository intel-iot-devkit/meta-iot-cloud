inherit pypi setuptools
require python-jmespath.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-argparse \
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-lang \
"