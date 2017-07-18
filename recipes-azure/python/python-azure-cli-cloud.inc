DESCRIPTION = "Microsoft Azure Command-Line Tools Cloud Command Module"

PV = "2.0.6"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "bb999bfd7aa65df3881b1336c71140a943460ecf"

SRC_DIR = "src/command_modules/azure-cli-cloud"
