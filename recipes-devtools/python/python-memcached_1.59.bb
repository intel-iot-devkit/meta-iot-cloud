inherit pypi setuptools
require python-memcached.inc

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-threading \
    ${PYTHON_PN}-zlib \
"
