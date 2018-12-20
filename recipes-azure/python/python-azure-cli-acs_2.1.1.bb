inherit pypi setuptools
require python-azure-cli-acs.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-subprocess \
"