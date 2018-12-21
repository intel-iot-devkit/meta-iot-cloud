inherit pypi setuptools
require python-azure-cli-container.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-io \
"
