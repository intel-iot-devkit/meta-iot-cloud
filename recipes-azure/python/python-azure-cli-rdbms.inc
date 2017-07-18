DESCRIPTION = "Microsoft Azure Command-Line Tools MySQL and PostgreSQL Command Module"

PV = "0.0.5"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-rdbms \
	${PYTHON_PN}-six \
"

SRCREV = "b1e4d490940b8aaf859d0e7d52527dbe0cc6561a"

SRC_DIR = "src/command_modules/azure-cli-rdbms"
