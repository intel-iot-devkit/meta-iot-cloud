inherit setuptools3 update-alternatives
require python-pyjwt.inc

ALTERNATIVE_${PN} = "jwt"
ALTERNATIVE_LINK_NAME[jwt] = "${bindir}/jwt"
ALTERNATIVE_PRIORITY = "30"
