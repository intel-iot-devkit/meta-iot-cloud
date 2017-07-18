DESCRIPTION = "Microsoft Azure Command-Line Tools DevTestLabs Command Module"

PV = "0.0.8"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-graphrbac \
	${PYTHON_PN}-azure-mgmt-devtestlabs \
"

SRCREV = "8eeb51cf83278374bec8dde136af442b76098b31"

SRC_DIR = "src/command_modules/azure-cli-lab"
