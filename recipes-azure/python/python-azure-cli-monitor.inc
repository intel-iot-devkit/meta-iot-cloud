DESCRIPTION = "Microsoft Azure Command-Line Tools Monitor Command Module"

PV = "0.0.8"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-monitor \
	${PYTHON_PN}-azure-mgmt-monitor \
"

SRCREV = "799428954711a427fd3172435b1cbbaa57e688ad"

SRC_DIR = "src/command_modules/azure-cli-monitor"
