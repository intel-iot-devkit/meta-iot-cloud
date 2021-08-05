inherit pypi setuptools3
require python-memcached.inc

RDEPENDS:${PN} += " \
    ${PYTHON_PN}-compression \
"
