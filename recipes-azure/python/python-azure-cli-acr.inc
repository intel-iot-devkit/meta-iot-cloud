DESCRIPTION = "Microsoft Azure Command-Line Tools ACR Command Module"

PV = "0.1.1b2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-resource \
	${PYTHON_PN}-azure-mgmt-storage \
"

SRCREV = "1f0aa043d6f4b3791433afdbdc53801efa7a23b5"

SRC_DIR = "src/command_modules/azure-cli-acr"
