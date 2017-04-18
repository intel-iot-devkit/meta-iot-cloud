DESCRIPTION = "Microsoft Azure Command-Line Tools Monitor Command Module"

PV = "0.0.2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-monitor \
	${PYTHON_PN}-azure-mgmt-monitor \
"

SRCREV = "8e62b7634b5151ba0020f502232c92e961aeb911"

SRC_DIR = "src/command_modules/azure-cli-monitor"
