DESCRIPTION = "Microsoft Azure Command-Line Tools Cloud Command Module"

PV = "2.0.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "6cd5d7c924b9674b4729cd8316aad1ce72b052d3"

SRC_DIR = "src/command_modules/azure-cli-cloud"
