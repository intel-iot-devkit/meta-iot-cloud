inherit pypi setuptools update-alternatives
require python-wheel.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-argparse \
	${PYTHON_PN}-subprocess \
	${PYTHON_PN}-textutils \
"

ALTERNATIVE_${PN} = "wheel"
ALTERNATIVE_LINK_NAME[wheel] = "${bindir}/wheel"
ALTERNATIVE_PRIORITY = "20"
