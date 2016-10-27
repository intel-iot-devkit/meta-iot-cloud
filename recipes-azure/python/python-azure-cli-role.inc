DESCRIPTION = "Microsoft Azure Command-Line Tools Role Command Module"

PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-authorization \
	${PYTHON_PN}-azure-graphrbac \
"

SRC_DIR = "src/command_modules/azure-cli-role"
