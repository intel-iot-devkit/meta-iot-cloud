DESCRIPTION = "Microsoft Azure Command-Line Tools Profile Command Module"

PV = "2.0.4"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-adal \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "b15db52b15ce547ddd78802e395ab61666f57fec"

SRC_DIR = "src/command_modules/azure-cli-profile"
