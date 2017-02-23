DESCRIPTION = "Microsoft Azure Command-Line Tools SQL Command Module"

PV = "0.1.1b4"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-sql\
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "b1e8851e003ba4925a1ef41404d8d42bf6191121"

SRC_DIR = "src/command_modules/azure-cli-sql"
