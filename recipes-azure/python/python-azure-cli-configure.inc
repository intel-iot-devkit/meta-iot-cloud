DESCRIPTION = "Microsoft Azure Command-Line Tools Configure Command Module"

PV = "2.0.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "2b16e58b6ce000fad2ec96ab597451fec529819e"

SRC_DIR = "src/command_modules/azure-cli-configure"
