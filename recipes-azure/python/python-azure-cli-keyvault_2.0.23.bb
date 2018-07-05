inherit pypi setuptools
require python-azure-cli-keyvault.inc

RDEPENDS_${PN} += "\
	${PYTHON_PN}-argparse \
"