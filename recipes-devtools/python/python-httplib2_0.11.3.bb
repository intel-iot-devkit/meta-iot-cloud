inherit pypi setuptools
require python-httplib2.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-codecs \
	${PYTHON_PN}-zlib \
"