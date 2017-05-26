DESCRIPTION = "Microsoft Azure Command-Line Tools Monitor Command Module"

PV = "0.0.4"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-monitor \
	${PYTHON_PN}-azure-mgmt-monitor \
"

SRCREV = "b4cc24069ecdf1054d3836d70723f33ec859f797"

SRC_DIR = "src/command_modules/azure-cli-monitor"
