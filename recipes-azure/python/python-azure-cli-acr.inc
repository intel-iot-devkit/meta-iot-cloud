DESCRIPTION = "Microsoft Azure Command-Line Tools ACR Command Module"

PV = "2.0.8"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-resource \
	${PYTHON_PN}-azure-mgmt-storage \
	${PYTHON_PN}-azure-mgmt-containerregistry \
"

SRCREV = "e30a26a910e4789f00173b494844fc40593a51ee"

SRC_DIR = "src/command_modules/azure-cli-acr"
