inherit setuptools
require python-azure-mgmt-media.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-enum34 \
"
