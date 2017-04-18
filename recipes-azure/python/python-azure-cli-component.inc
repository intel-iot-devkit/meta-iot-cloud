DESCRIPTION = "Microsoft Azure Command-Line Tools Component Command Module"

PV = "2.0.1"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "febe4078f090d4e74954ccf0f51534a00220135d"

SRC_DIR = "src/command_modules/azure-cli-component"
