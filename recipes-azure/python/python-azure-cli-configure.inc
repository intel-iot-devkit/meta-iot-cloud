DESCRIPTION = "Microsoft Azure Command-Line Tools Configure Command Module"

PV = "2.0.10"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "9520721bfd3ce5212f6eddd906e0b33661ef565d"

SRC_DIR = "src/command_modules/azure-cli-configure"
