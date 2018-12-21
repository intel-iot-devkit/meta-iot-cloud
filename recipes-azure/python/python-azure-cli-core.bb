inherit setuptools
require python-azure-cli-core.inc
require azure-cli-common.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-enum34 \
    ${PYTHON_PN}-ndg-httpsclient \
    ${PYTHON_PN}-pyasn1 \
"
