DESCRIPTION = "Microsoft Azure Command-Line Tools ACS Command Module"

PV = "0.1.1b2"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-compute \
	${PYTHON_PN}-paramiko \
	${PYTHON_PN}-pyyaml \
	${PYTHON_PN}-sshtunnel \
"

SRCREV = "be7c0f2c9a6d835bf3b5c070ae6959d30613517d"

SRC_DIR = "src/command_modules/azure-cli-acs"
