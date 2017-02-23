DESCRIPTION = "Microsoft Azure Command-Line Tools SQL Command Module"

PV = "0.1.1b3"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-sql\
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "ae2d4f9e54620661b0d93eb7996ba1b7f5743851"

SRC_DIR = "src/command_modules/azure-cli-sql"
