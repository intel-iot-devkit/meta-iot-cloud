inherit setuptools
require python-azure-mgmt-eventhub.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-enum34 \
"