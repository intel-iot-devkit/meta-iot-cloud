DESCRIPTION = "Microsoft Azure Command-Line Tools Redis Command Module"

PV = "0.1.1b2"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-redis \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "8cae56183eb643c905f08a886bb5e72fb963fd6e"
SRC_DIR = "src/command_modules/azure-cli-redis"
