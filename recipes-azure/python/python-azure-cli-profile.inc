DESCRIPTION = "Microsoft Azure Command-Line Tools Profile Command Module"

PV = "2.0.8"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-adal \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "e8a50d50d3da93812e9ba37a9e910ad0b0b68a07"

SRC_DIR = "src/command_modules/azure-cli-profile"
