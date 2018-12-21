inherit setuptools
require python-azure-datalake-store.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-futures \
    ${PYTHON_PN}-pathlib2 \
"
