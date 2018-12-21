inherit setuptools
require python-argcomplete.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-contextlib \
"
