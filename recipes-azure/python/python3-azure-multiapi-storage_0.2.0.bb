inherit pypi setuptools3
require python-azure-multiapi-storage.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-asyncio \
"