inherit setuptools
require python-azure-mgmt-reservations.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-enum34 \
"