inherit pypi setuptools3 update-alternatives
require python-sshtunnel.inc

ALTERNATIVE:${PN} = "sshtunnel"
ALTERNATIVE_LINK_NAME[sshtunnel] = "${bindir}/sshtunnel"
ALTERNATIVE_PRIORITY = "30"
