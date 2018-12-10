inherit setuptools update-alternatives
require python-pygments.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-codecs \
	${PYTHON_PN}-lang \
	${PYTHON_PN}-subprocess \
	${PYTHON_PN}-textutils \
"

ALTERNATIVE_${PN} = "pygmentize"
ALTERNATIVE_LINK_NAME[pygmentize] = "${bindir}/pygmentize"
ALTERNATIVE_PRIORITY = "20"
