DESCRIPTION = "Microsoft Azure Command-Line Tools Profile Command Module"

PV = "0.1.1b2"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-adal \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "f21cba4574f025f4a311bdb86dcfbbc4a5f52633"

SRC_DIR = "src/command_modules/azure-cli-profile"
