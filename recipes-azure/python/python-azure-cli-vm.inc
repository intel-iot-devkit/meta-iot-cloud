DESCRIPTION = "Microsoft Azure Command-Line Tools VM Command Module"

PV = "2.0.6"
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

SRCREV = "609da2ec18149daee8d657a556768b08b4066b20"

SRC_DIR = "src/command_modules/azure-cli-vm"
