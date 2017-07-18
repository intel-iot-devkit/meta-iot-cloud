DESCRIPTION = "Microsoft Azure Command-Line Tools VM Command Module"

PV = "2.0.10"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-compute \
	${PYTHON_PN}-azure-mgmt-keyvault \
	${PYTHON_PN}-azure-keyvault \
	${PYTHON_PN}-azure-mgmt-network \
	${PYTHON_PN}-azure-mgmt-resource \
	${PYTHON_PN}-azure-multiapi-storage \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "d8575d17bdf0ffb9ac17d517aafce2c100eb1b79"

SRC_DIR = "src/command_modules/azure-cli-vm"
