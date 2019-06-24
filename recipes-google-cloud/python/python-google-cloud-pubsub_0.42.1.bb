inherit pypi setuptools
require python-google-cloud-pubsub.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-lang \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-enum34 \
"
