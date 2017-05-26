DESCRIPTION = "Microsoft Azure Command-Line Tools Redis Command Module"

PV = "0.2.3"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-redis \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "3fb70f38751bbf0dc2b5c2aa9e30e669bdf64298"

SRC_DIR = "src/command_modules/azure-cli-redis"
