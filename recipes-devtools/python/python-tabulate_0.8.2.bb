inherit pypi setuptools update-alternatives
require python-tabulate.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-lang \
    ${PYTHON_PN}-math \
    ${PYTHON_PN}-textutils \
"

ALTERNATIVE_${PN} = "tabulate"
ALTERNATIVE_LINK_NAME[tabulate] = "${bindir}/tabulate"
ALTERNATIVE_PRIORITY = "20"
