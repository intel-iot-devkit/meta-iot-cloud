inherit pypi setuptools
require python-azure-cli-appservice.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-lang \
    ${PYTHON_PN}-subprocess \
"
