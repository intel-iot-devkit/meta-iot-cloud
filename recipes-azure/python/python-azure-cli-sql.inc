DESCRIPTION = "Microsoft Azure Command-Line Tools SQL Command Module"

PV = "0.1.1b5"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-sql\
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "9521eba8c39e89eaf9be948ebb66ec7d3f586b31"

SRC_DIR = "src/command_modules/azure-cli-sql"
