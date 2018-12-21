inherit setuptools
require python-azure-storage.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-futures \
"
