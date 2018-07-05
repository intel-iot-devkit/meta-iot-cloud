inherit pypi setuptools
require python-azure-storage-blob.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-threading \
"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-futures \
"
