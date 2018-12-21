inherit pypi setuptools update-alternatives
require python-humanfriendly.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-lang \
    ${PYTHON_PN}-subprocess \
    ${PYTHON_PN}-textutils \
"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-monotonic \
"

ALTERNATIVE_${PN} = "humanfriendly"
ALTERNATIVE_LINK_NAME[humanfriendly] = "${bindir}/humanfriendly"
ALTERNATIVE_PRIORITY = "20"
