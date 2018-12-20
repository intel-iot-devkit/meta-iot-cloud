inherit setuptools
require python-azure-mgmt-servicebus.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-enum34 \
"