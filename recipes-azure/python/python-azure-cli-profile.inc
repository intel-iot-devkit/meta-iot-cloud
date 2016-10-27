DESCRIPTION = "Microsoft Azure Command-Line Tools Profile Command Module"

PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-adal \
	${PYTHON_PN}-azure-cli-core \
"

SRC_DIR = "src/command_modules/azure-cli-profile"
