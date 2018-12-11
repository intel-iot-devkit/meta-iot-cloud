inherit pypi setuptools update-alternatives
require python-sshtunnel.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-argparse \
"

ALTERNATIVE_${PN} = "sshtunnel"
ALTERNATIVE_LINK_NAME[sshtunnel] = "${bindir}/sshtunnel"
ALTERNATIVE_PRIORITY = "20"
