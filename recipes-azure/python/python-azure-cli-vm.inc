DESCRIPTION = "Microsoft Azure Command-Line Tools VM Command Module"

PV = "0.1.1b2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-compute \
	${PYTHON_PN}-azure-mgmt-network \
	${PYTHON_PN}-azure-mgmt-resource \
	${PYTHON_PN}-azure-storage \
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-paramiko \
"

SRCREV = "43b623f9931f3e151407ba65c1a4f10469610af8"

SRC_DIR = "src/command_modules/azure-cli-vm"
