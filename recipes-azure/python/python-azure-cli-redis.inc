DESCRIPTION = "Microsoft Azure Command-Line Tools Redis Command Module"

PV = "0.2.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-redis \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "98f4b25eaea51207c604a699f9c0d35638acf5b0"

SRC_DIR = "src/command_modules/azure-cli-redis"
