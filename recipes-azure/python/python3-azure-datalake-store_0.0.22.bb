inherit pypi setuptools3
require python-azure-datalake-store.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-asyncio \
"