DESCRIPTION = "Microsoft Azure Command-Line Tools ACR Command Module"

PV = "2.0.1"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-resource \
	${PYTHON_PN}-azure-mgmt-storage \
	${PYTHON_PN}-azure-mgmt-containerregistry \
"

SRCREV = "06c9d8f132659c17a5c27d06aca6471a824e1ad8"

SRC_DIR = "src/command_modules/azure-cli-acr"
