DESCRIPTION = "Microsoft Azure Command-Line Tools VM Command Module"

PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-compute \
	${PYTHON_PN}-azure-mgmt-network \
	${PYTHON_PN}-azure-mgmt-resource \
	${PYTHON_PN}-azure-storage \
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-paramiko \
"

SRC_DIR = "src/command_modules/azure-cli-vm"
