inherit pypi setuptools
require python-cherrypy.inc

RDEPENDS_${PN} += " \
	${PYTHON_PN}-codecs \
	${PYTHON_PN}-contextlib \
	${PYTHON_PN}-lang \
	${PYTHON_PN}-mime \
	${PYTHON_PN}-subprocess \
	${PYTHON_PN}-threading \
	${PYTHON_PN}-zlib \
"
