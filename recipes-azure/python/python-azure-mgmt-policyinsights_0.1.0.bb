inherit setuptools
require python-azure-mgmt-policyinsights.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-enum34 \
"