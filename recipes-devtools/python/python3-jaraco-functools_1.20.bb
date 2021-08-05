inherit pypi setuptools3
require python-jaraco-functools.inc

RDEPENDS:${PN} += "\
    ${PYTHON_PN}-lang \
"
