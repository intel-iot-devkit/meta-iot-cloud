inherit setuptools
require python-azure-batch-extensions.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-pathlib2 \
"
