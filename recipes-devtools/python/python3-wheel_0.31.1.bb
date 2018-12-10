inherit pypi setuptools3 update-alternatives
require python-wheel.inc

ALTERNATIVE_${PN} = "wheel"
ALTERNATIVE_LINK_NAME[wheel] = "${bindir}/wheel"
ALTERNATIVE_PRIORITY = "30"
