DESCRIPTION = "Microsoft Azure Command-Line Tools Component Command Module"

PV = "2.0.4"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "fa18beffac1010f9d2e8834fda8b16a39bd0a4a1"

SRC_DIR = "src/command_modules/azure-cli-component"
