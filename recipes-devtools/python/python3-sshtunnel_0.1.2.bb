inherit setuptools3 update-alternatives
require python-sshtunnel.inc

ALTERNATIVE_${PN} = "sshtunnel"
ALTERNATIVE_LINK_NAME[sshtunnel] = "${bindir}/sshtunnel"
ALTERNATIVE_PRIORITY = "30"
