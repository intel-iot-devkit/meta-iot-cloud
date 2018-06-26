inherit setuptools
require python-pygments.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-codecs \
	${PYTHON_PN}-lang \
	${PYTHON_PN}-subprocess \
	${PYTHON_PN}-textutils \
"