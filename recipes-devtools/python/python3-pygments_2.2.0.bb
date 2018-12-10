inherit setuptools3 update-alternatives
require python-pygments.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-stringold \
"

ALTERNATIVE_${PN} = "pygmentize"
ALTERNATIVE_LINK_NAME[pygmentize] = "${bindir}/pygmentize"
ALTERNATIVE_PRIORITY = "30"
