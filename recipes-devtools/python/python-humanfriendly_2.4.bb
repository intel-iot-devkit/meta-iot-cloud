inherit setuptools
require python-humanfriendly.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-monotonic \
"
