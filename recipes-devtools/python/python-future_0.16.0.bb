inherit setuptools update-alternatives
require python-future.inc

ALTERNATIVE_${PN} = "futurize pasteurize"
ALTERNATIVE_LINK_NAME[futurize] = "${bindir}/futurize"
ALTERNATIVE_LINK_NAME[pasteurize] = "${bindir}/pasteurize"
ALTERNATIVE_PRIORITY = "20"
