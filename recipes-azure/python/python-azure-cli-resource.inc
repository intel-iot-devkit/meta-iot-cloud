DESCRIPTION = "Microsoft Azure Command-Line Tools Resource Command Module"

PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-resource \
	${PYTHON_PN}-azure-cli-core \
"

SRC_DIR = "src/command_modules/azure-cli-resource"
