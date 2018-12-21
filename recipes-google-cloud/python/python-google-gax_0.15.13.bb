inherit setuptools
require python-google-gax.inc

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-future \
"
