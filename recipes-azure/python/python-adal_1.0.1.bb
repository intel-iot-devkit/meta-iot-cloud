inherit pypi setuptools
require python-adal.inc

RDEPENDS_${PN} += "\
        ${PYTHON_PN}-io \
        ${PYTHON_PN}-math \
"