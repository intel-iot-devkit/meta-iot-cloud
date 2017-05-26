DESCRIPTION = "Microsoft Azure Command-Line Tools DevTestLabs Command Module"

PV = "0.0.4"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-graphrbac \
	${PYTHON_PN}-azure-mgmt-devtestlabs \
"

SRCREV = "417f611407966cdccfdd93b8ac3e625ca6b97a94"

SRC_DIR = "src/command_modules/azure-cli-lab"
