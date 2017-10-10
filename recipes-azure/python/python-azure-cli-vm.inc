DESCRIPTION = "Microsoft Azure Command-Line Tools VM Command Module"

PV = "2.0.16"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-authorization \
	${PYTHON_PN}-azure-mgmt-compute \
	${PYTHON_PN}-azure-mgmt-keyvault \
	${PYTHON_PN}-azure-keyvault \
	${PYTHON_PN}-azure-mgmt-network \
	${PYTHON_PN}-azure-mgmt-resource \
	${PYTHON_PN}-azure-multiapi-storage \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "8aac031090e6d3b80e5b669b8a16532b4ceaa3b3"

SRC_DIR = "src/command_modules/azure-cli-vm"
