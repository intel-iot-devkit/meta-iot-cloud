DESCRIPTION = "Microsoft Azure Command-Line Tools ACS Command Module"

PV = "0.1.2rc2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-authorization \
	${PYTHON_PN}-azure-mgmt-compute \
	${PYTHON_PN}-azure-graphrbac \
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-paramiko \
	${PYTHON_PN}-pyyaml \
	${PYTHON_PN}-six \
	${PYTHON_PN}-scp \
	${PYTHON_PN}-sshtunnel \
"

SRCREV = "9490c0e49aeda37b652b00c05922a6a3b77313da"

SRC_DIR = "src/command_modules/azure-cli-acs"
