DESCRIPTION = "Microsoft Azure Command-Line Tools SQL Command Module"

PV = "2.0.1"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-sql\
	${PYTHON_PN}-azure-mgmt-storage\
"

SRCREV = "e1b74b77f1535f9f2e3a589ecda37a6d51ba6456"

SRC_DIR = "src/command_modules/azure-cli-sql"
