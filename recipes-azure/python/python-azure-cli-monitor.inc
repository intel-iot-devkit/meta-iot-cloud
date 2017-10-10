DESCRIPTION = "Microsoft Azure Command-Line Tools Monitor Command Module"

PV = "0.0.10"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-monitor \
	${PYTHON_PN}-azure-mgmt-monitor \
"

SRCREV = "5e161354ab5b020455cfb08d7d88aa9b11b6bc2a"

SRC_DIR = "src/command_modules/azure-cli-monitor"
