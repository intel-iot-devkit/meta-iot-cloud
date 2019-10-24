inherit pypi setuptools
require python-google-api-core.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-lang \
    ${PYTHON_PN}-threading \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-futures \
"
