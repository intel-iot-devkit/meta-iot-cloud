DESCRIPTION = "Microsoft Azure Command-Line Tools Cloud Command Module"

PV = "2.0.1"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "871d241d0e28ed4ed6daa294053c546a476a4973"

SRC_DIR = "src/command_modules/azure-cli-cloud"
