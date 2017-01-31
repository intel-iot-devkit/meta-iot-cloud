DESCRIPTION = "Microsoft Azure Command-Line Tools Context Command Module"

PV = "0.1.1b2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "7d865f225c62343b881dfeb880f65f401461f455"

SRC_DIR = "src/command_modules/azure-cli-context"
