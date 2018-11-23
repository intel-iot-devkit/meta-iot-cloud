inherit setuptools update-alternatives
require python-awscli.inc

ALTERNATIVE_${PN} = "aws"
ALTERNATIVE_LINK_NAME[aws] = "${bindir}/aws"
ALTERNATIVE_PRIORITY = "20"
