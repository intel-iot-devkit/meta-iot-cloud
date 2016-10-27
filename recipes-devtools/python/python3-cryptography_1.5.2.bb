inherit setuptools3
require python-cryptography.inc

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-lang \
"
