inherit pypi setuptools
require python-scp.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-codecs \
"