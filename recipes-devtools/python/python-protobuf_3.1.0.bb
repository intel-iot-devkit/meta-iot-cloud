inherit setuptools
require python-protobuf.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-unittest2 \
"
