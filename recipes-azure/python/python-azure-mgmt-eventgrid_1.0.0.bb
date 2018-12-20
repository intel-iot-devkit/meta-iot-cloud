inherit setuptools
require python-azure-mgmt-eventgrid.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-enum34 \
"