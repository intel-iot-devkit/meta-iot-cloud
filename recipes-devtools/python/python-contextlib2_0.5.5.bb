inherit pypi setuptools
require python-contextlib2.inc

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-lang \
"
