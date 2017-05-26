DESCRIPTION = "Microsoft Azure Command-Line Tools MySQL and PostgreSQL Command Module"

PV = "0.0.1"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-rdbms \
	${PYTHON_PN}-six \
"

SRCREV = "0892106641c71a0f8c15d0cf7d1ac9b50fb8cf13"

SRC_DIR = "src/command_modules/azure-cli-rdbms"
