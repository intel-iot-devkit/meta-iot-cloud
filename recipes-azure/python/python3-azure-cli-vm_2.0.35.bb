inherit pypi setuptools3
require python-azure-cli-vm.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-asyncio \
"