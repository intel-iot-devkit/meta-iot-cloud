DESCRIPTION = "Microsoft Azure Command-Line Tools Role Command Module"

PV = "2.0.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-authorization \
	${PYTHON_PN}-azure-graphrbac \
"

SRCREV = "42f5ab9bdbd7f3fd183128519282304308076449"

SRC_DIR = "src/command_modules/azure-cli-role"
