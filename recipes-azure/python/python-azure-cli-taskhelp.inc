DESCRIPTION = "Microsoft Azure Command-Line Tools Taskhelp Command Module"

PV = "0.1.1b3"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "d44e796a0350e28e938c80867d21926446840e45"

SRC_DIR = "src/command_modules/azure-cli-taskhelp"
