inherit setuptools
require python-azure-mgmt-recoveryservices.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-enum34 \
"
