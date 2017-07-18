DESCRIPTION = "Microsoft Azure Command-Line Tools Consumption Command Module"

PV = "0.1.3"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-consumption \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "0de639328c2111497231a8da023e25e4eccf6327"

SRC_DIR = "src/command_modules/azure-cli-consumption"
