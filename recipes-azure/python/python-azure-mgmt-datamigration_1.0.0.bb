inherit setuptools
require python-azure-mgmt-datamigration.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-enum34 \
"