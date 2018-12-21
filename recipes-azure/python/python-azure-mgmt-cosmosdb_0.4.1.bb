inherit setuptools
require python-azure-mgmt-cosmosdb.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-enum34 \
"