inherit pypi setuptools
require python-azure-cli-acr.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-argparse \
    ${PYTHON_PN}-subprocess \
"
