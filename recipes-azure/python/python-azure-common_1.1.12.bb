inherit setuptools
require python-azure-common.inc
require azure-sdk-common.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-lang \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-enum34 \
"