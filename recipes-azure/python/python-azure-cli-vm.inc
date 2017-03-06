DESCRIPTION = "Microsoft Azure Command-Line Tools VM Command Module"

PV = "2.0.0"
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

SRCREV = "48efa36a556dd9a0bfef078ac9519b67bb736b74"

SRC_DIR = "src/command_modules/azure-cli-vm"
