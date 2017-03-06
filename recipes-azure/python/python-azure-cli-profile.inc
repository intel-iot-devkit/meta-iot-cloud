DESCRIPTION = "Microsoft Azure Command-Line Tools Profile Command Module"

PV = "2.0.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-adal \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "23594cf8632e1bde3a98a281a6016724d3effc16"

SRC_DIR = "src/command_modules/azure-cli-profile"
