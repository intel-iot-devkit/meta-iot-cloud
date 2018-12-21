inherit setuptools update-alternatives
require python-humanfriendly.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-monotonic \
"

ALTERNATIVE_${PN} = "humanfriendly"
ALTERNATIVE_LINK_NAME[humanfriendly] = "${bindir}/humanfriendly"
ALTERNATIVE_PRIORITY = "20"
