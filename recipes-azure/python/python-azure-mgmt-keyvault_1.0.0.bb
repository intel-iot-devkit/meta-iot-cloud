inherit setuptools
require python-azure-mgmt-keyvault.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-enum34 \
"
