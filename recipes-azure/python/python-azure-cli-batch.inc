DESCRIPTION = "Microsoft Azure Command-Line Tools Batch Command Module"

PV = "0.1.1b2"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-batch \
	${PYTHON_PN}-azure-batch \
"

SRCREV = "054a9ee2d43c68196323b319b5ad8dd0014534ec"

SRC_DIR = "src/command_modules/azure-cli-batch"
