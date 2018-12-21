inherit pypi setuptools3
require python-jaraco-functools.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-lang \
"
