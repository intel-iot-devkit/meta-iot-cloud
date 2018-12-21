inherit setuptools
require python-azure-mgmt-web.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-enum34 \
"
