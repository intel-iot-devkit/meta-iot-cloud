DESCRIPTION = "Microsoft Azure Command-Line Tools ACR Command Module"

PV = "2.0.4"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-resource \
	${PYTHON_PN}-azure-mgmt-storage \
	${PYTHON_PN}-azure-mgmt-containerregistry \
"

SRCREV = "c0f05da521544c3ef4f557c13744a96b038c816e"

SRC_DIR = "src/command_modules/azure-cli-acr"
