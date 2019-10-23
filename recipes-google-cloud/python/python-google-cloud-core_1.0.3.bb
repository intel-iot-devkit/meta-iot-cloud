inherit pypi setuptools
require python-google-cloud-core.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-threading \
"
