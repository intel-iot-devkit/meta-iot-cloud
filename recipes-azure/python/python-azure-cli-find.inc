DESCRIPTION = "Microsoft Azure Command-Line Tools Find Command Module"

PV = "0.2.2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-whoosh \
"

SRCREV = "9c848af7900b7e369fa4639dcd612325f46d5d07"

SRC_DIR = "src/command_modules/azure-cli-find"
