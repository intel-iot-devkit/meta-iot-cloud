DESCRIPTION = "Microsoft Azure Command-Line Tools Consumption Command Module"

PV = "0.1.5"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-consumption \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "893fdf04b82ed715c47067143b4fdec5a629e41a"

SRC_DIR = "src/command_modules/azure-cli-consumption"
