inherit setuptools
require python-google-cloud-vision.inc
require python-google-cloud-common.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-enum34 \
"
