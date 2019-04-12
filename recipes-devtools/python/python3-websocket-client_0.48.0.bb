inherit setuptools3 update-alternatives
require python-websocket-client.inc

ALTERNATIVE_${PN} = "wsdump"
ALTERNATIVE_LINK_NAME[wsdump] = "${bindir}/wsdump.py"
ALTERNATIVE_PRIORITY = "30"
