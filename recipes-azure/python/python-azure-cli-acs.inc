DESCRIPTION = "Microsoft Azure Command-Line Tools ACS Command Module"

PV = "2.0.10"
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

SRCREV = "27e0a44807d21dde187bd824793551832a3bb277"

SRC_DIR = "src/command_modules/azure-cli-acs"
