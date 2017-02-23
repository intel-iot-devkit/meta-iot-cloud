DESCRIPTION = "Microsoft Azure Command-Line Tools Component Command Module"

PV = "0.1.1rc2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "50b108bc56285f5f17c7aa5158daa6bcc59d380e"

SRC_DIR = "src/command_modules/azure-cli-component"
