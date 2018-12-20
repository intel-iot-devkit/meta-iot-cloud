inherit setuptools
require python-azure-mgmt-cognitiveservices.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-enum34 \
"
