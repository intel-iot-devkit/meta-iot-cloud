inherit setuptools
require python-websocket-client.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-argparse \
	${PYTHON_PN}-lang \
"