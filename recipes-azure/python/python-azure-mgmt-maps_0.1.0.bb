inherit setuptools
require python-azure-mgmt-maps.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-enum34 \
"