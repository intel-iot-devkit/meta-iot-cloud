inherit pypi setuptools
require python-azure-cli-network.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-argparse \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-ipaddress \
    ${PYTHON_PN}-mock \
"