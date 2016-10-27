DESCRIPTION = "Microsoft Azure Command-Line Tools Redis Command Module"

PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-redis \
	${PYTHON_PN}-azure-cli-core \
"

SRC_DIR = "src/command_modules/azure-cli-redis"
