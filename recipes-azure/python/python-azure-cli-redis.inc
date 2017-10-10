DESCRIPTION = "Microsoft Azure Command-Line Tools Redis Command Module"

PV = "0.2.9"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-redis \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "35f4d20d32a2cd4beacc77bff811c81291299cd6"

SRC_DIR = "src/command_modules/azure-cli-redis"
