inherit pypi setuptools
require python-azure-cli-storage.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-argparse \
"