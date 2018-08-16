inherit pypi setuptools
require python-more-itertools.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-lang \
    ${PYTHON_PN}-io \
"
