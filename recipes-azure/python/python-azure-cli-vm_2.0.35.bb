inherit pypi setuptools
require python-azure-cli-vm.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-codecs \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-enum34 \
    ${PYTHON_PN}-futures \
"