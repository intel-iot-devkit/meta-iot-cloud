inherit pypi setuptools3 update-alternatives
require python-tabulate.inc

ALTERNATIVE:${PN} = "tabulate"
ALTERNATIVE_LINK_NAME[tabulate] = "${bindir}/tabulate"
ALTERNATIVE_PRIORITY = "30"
