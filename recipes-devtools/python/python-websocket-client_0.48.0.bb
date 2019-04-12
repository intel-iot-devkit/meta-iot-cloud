inherit setuptools update-alternatives
require python-websocket-client.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-argparse \
    ${PYTHON_PN}-lang \
"

ALTERNATIVE_${PN} = "wsdump"
ALTERNATIVE_LINK_NAME[wsdump] = "${bindir}/wsdump.py"
ALTERNATIVE_PRIORITY = "20"
