inherit pypi setuptools
require python-google-auth.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-lang \
    ${PYTHON_PN}-subprocess \
"
