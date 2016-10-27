inherit setuptools
require python-cryptography.inc

DEPENDS += " \
    ${PYTHON_PN}-enum34 \
"

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-enum34 \
    ${PYTHON_PN}-ipaddress \
"
