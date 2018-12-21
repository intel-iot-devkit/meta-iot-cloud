inherit pypi setuptools
require python-azure-cli-sql.inc

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-enum34 \
"