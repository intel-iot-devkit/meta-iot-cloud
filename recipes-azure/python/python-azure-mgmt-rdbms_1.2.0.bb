inherit setuptools
require python-azure-mgmt-rdbms.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-enum34 \
"