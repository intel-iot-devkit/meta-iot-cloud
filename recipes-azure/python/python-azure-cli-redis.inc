DESCRIPTION = "Microsoft Azure Command-Line Tools Redis Command Module"

PV = "0.1.1b3"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-redis \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "65a6628bdcc3150f7a67fa70361b4e817990c125"

SRC_DIR = "src/command_modules/azure-cli-redis"
