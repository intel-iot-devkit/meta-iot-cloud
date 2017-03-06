DESCRIPTION = "Microsoft Azure CLI Namespace Package"

PV = "2.0.0"
PR = "r0"

RDEPENDS_${PN} = "\
	${PYTHON_PN}-azure-nspkg \
"

SRCREV = "c82259469d3fe69457bea4d3c7e8ef1a8466eeca"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/cli/*.py \
	${PYTHON_SITEPACKAGES_DIR}/azure/cli/*.pyc \
	${PYTHON_SITEPACKAGES_DIR}/azure/cli/command_modules/*.py \
	${PYTHON_SITEPACKAGES_DIR}/azure/cli/command_modules/*.pyc \
	${PYTHON_SITEPACKAGES_DIR}/azure_cli_nspkg-* \
"

SRC_DIR = "src/azure-cli-nspkg"
