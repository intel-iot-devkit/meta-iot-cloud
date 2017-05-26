DESCRIPTION = "Microsoft Azure Command-Line Tools Data Lake Analytics Command Module"

PV = "0.0.6"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-datalake-store \
	${PYTHON_PN}-azure-mgmt-datalake-analytics \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "5206268b6e1d9f52660f9e148641e04170256b4f"

SRC_DIR = "src/command_modules/azure-cli-dla"
