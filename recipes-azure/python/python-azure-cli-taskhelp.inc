DESCRIPTION = "Microsoft Azure Command-Line Tools Taskhelp Command Module"

PV = "0.1.1b2"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "4fa731e59246c42948266d71453507027564a477"

SRC_DIR = "src/command_modules/azure-cli-taskhelp"
