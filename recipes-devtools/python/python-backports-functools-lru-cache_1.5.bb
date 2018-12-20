inherit pypi setuptools
require python-backports-functools-lru-cache.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-lang \
    ${PYTHON_PN}-threading \
"
