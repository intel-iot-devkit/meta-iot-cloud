DESCRIPTION = "Microsoft Azure Command-Line Tools VM Command Module"

PV = "0.1.2rc2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-compute \
	${PYTHON_PN}-azure-keyvault \
	${PYTHON_PN}-azure-mgmt-network \
	${PYTHON_PN}-azure-mgmt-resource \
	${PYTHON_PN}-azure-storage \
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-paramiko \
"

SRCREV = "4ba279f84e85484333b4dde06b04665a82902d1c"

SRC_DIR = "src/command_modules/azure-cli-vm"
