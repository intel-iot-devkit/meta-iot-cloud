inherit setuptools
require python-azure-mgmt-batch.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-enum34 \
"
