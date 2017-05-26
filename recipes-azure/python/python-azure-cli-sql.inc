DESCRIPTION = "Microsoft Azure Command-Line Tools SQL Command Module"

PV = "2.0.3"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-sql \
	${PYTHON_PN}-azure-mgmt-storage \
	${PYTHON_PN}-six \
"

SRCREV = "e97cbb35cf83580362d33646e3ff769f6c3a1671"

SRC_DIR = "src/command_modules/azure-cli-sql"
