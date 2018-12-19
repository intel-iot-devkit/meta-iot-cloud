inherit pypi setuptools3 update-alternatives
require python-keyring.inc

ALTERNATIVE_${PN} = "keyring"
ALTERNATIVE_LINK_NAME[keyring] = "${bindir}/keyring"
ALTERNATIVE_PRIORITY = "30"
