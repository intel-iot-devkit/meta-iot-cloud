inherit setuptools
require python-azure-graphrbac.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-enum34 \
"