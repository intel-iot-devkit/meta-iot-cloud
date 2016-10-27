DESCRIPTION = "Microsoft Azure Command-Line Tools Network Command Module"

PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-network \
	${PYTHON_PN}-azure-mgmt-trafficmanager \
	${PYTHON_PN}-azure-mgmt-dns \
	${PYTHON_PN}-azure-cli-core \
"

SRC_DIR = "src/command_modules/azure-cli-network"
