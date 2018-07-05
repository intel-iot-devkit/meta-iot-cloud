inherit pypi setuptools
require python-azure-storage-file.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-futures \
"