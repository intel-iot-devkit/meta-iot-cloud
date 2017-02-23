DESCRIPTION = "Microsoft Azure Command-Line Tools ACR Command Module"

PV = "0.1.1b4"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-resource \
	${PYTHON_PN}-azure-mgmt-storage \
	${PYTHON_PN}-azure-mgmt-containerregistry \
"

SRCREV = "cc90833c56ccc7555ad781ed2cedb5d99a5e58e3"

SRC_DIR = "src/command_modules/azure-cli-acr"
