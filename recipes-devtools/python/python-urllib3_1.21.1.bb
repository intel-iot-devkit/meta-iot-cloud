inherit setuptools
require python-urllib3.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-ipaddress \
"
