inherit setuptools
require python-azure-mgmt-consumption.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-enum34 \
"