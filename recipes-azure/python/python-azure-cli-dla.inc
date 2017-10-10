DESCRIPTION = "Microsoft Azure Command-Line Tools Data Lake Analytics Command Module"

PV = "0.0.12"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-datalake-store \
	${PYTHON_PN}-azure-mgmt-datalake-analytics \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "d2b92dfcf83f77e8584bb65f7d46446e30169c74"

SRC_DIR = "src/command_modules/azure-cli-dla"
