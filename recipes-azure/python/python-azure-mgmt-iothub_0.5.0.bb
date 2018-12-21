inherit setuptools
require python-azure-mgmt-iothub.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-enum34 \
"