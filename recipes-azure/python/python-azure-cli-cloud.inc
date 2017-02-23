DESCRIPTION = "Microsoft Azure Command-Line Tools Cloud Command Module"

PV = "0.1.1b2"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "13bf8b8cf3670a256fc2928d2be118f42bad29f1"

SRC_DIR = "src/command_modules/azure-cli-cloud"
