inherit pypi setuptools3
require python-more-itertools.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-stringold \
"
