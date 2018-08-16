inherit pypi setuptools3
require python-memcached.inc

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-compression \
"
