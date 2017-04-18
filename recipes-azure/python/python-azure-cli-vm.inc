DESCRIPTION = "Microsoft Azure Command-Line Tools VM Command Module"

PV = "2.0.3"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-compute \
	${PYTHON_PN}-azure-mgmt-keyvault \
	${PYTHON_PN}-azure-keyvault \
	${PYTHON_PN}-azure-mgmt-network \
	${PYTHON_PN}-azure-mgmt-resource \
	${PYTHON_PN}-azure-multiapi-storage \
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-paramiko \
"

SRCREV = "33facd93320f4954d63f5a22e38226cf1b0b6c18"

SRC_DIR = "src/command_modules/azure-cli-vm"
