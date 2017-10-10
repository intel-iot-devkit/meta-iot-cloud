DESCRIPTION = "Microsoft Azure Command-Line Tools MySQL and PostgreSQL Command Module"

PV = "0.0.7"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-rdbms \
	${PYTHON_PN}-six \
"

SRCREV = "14a0086914dbb9768dbb03c9cabdb380e30887dc"

SRC_DIR = "src/command_modules/azure-cli-rdbms"
