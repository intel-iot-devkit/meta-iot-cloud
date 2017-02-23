DESCRIPTION = "Microsoft Azure CLI Namespace Package"

PV = "0.1.2"
PR = "r0"

RDEPENDS_${PN} = "\
	${PYTHON_PN}-azure-nspkg \
"

SRCREV = "1914ae66c7e300bc9cc7aa6d74f62623010e3f61"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/cli/*.py \
	${PYTHON_SITEPACKAGES_DIR}/azure/cli/*.pyc \
	${PYTHON_SITEPACKAGES_DIR}/azure/cli/command_modules/*.py \
	${PYTHON_SITEPACKAGES_DIR}/azure/cli/command_modules/*.pyc \
	${PYTHON_SITEPACKAGES_DIR}/azure_cli_nspkg-* \
"

SRC_DIR = "src/azure-cli-nspkg"
