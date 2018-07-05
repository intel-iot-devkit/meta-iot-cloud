inherit pypi setuptools
require python-azure-cli-batch.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-argparse \
"
