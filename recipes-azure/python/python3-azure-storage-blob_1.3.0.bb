inherit pypi setuptools3
require python-azure-storage-blob.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-asyncio \
"
