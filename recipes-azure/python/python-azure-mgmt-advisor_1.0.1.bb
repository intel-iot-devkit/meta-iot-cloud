inherit setuptools
require python-azure-mgmt-advisor.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-enum34 \
"
