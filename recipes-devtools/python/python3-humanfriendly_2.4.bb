inherit setuptools3 update-alternatives
require python-humanfriendly.inc

ALTERNATIVE_${PN} = "humanfriendly"
ALTERNATIVE_LINK_NAME[humanfriendly] = "${bindir}/humanfriendly"
ALTERNATIVE_PRIORITY = "30"
