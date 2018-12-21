inherit pypi setuptools update-alternatives
require python-keyring.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-lang \
    ${PYTHON_PN}-textutils \
"

ALTERNATIVE_${PN} = "keyring"
ALTERNATIVE_LINK_NAME[keyring] = "${bindir}/keyring"
ALTERNATIVE_PRIORITY = "20"
