DESCRIPTION = "Microsoft Azure Command-Line Tools Keyvault Command Module"

PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-keyvault \
	${PYTHON_PN}-azure-cli-core \
"

SRC_DIR = "src/command_modules/azure-cli-keyvault"
