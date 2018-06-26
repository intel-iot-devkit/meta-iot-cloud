inherit pypi setuptools
require python-humanfriendly.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-lang \
	${PYTHON_PN}-subprocess \
	${PYTHON_PN}-textutils \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-monotonic \
"