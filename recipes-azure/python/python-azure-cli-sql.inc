DESCRIPTION = "Microsoft Azure Command-Line Tools SQL Command Module"

PV = "2.0.7"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-sql \
	${PYTHON_PN}-azure-mgmt-storage \
	${PYTHON_PN}-six \
"

SRCREV = "db56d6535d7fdf8873fc045035f44921421a20de"

SRC_DIR = "src/command_modules/azure-cli-sql"
