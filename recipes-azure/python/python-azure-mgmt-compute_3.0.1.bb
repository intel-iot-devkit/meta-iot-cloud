inherit setuptools
require python-azure-mgmt-compute.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-enum34 \
"