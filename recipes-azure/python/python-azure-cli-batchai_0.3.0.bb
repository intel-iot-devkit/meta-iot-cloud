inherit pypi setuptools
require python-azure-cli-batchai.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-lang \
"
