DESCRIPTION = "Microsoft Azure Command-Line Tools ACS Command Module"

PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-compute \
	${PYTHON_PN}-paramiko \
	${PYTHON_PN}-pyyaml \
	${PYTHON_PN}-sshtunnel \
"

SRC_DIR = "src/command_modules/azure-cli-acs"
