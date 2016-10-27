DESCRIPTION = "Microsoft Azure Command-Line Tools ACR Command Module"

PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-resource \
	${PYTHON_PN}-azure-mgmt-storage \
"

SRC_DIR = "src/command_modules/azure-cli-acr"
