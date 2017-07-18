DESCRIPTION = "Microsoft Azure Command-Line Tools Data Lake Analytics Command Module"

PV = "0.0.10"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-datalake-store \
	${PYTHON_PN}-azure-mgmt-datalake-analytics \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "81fddb81fe1cd96a24d8f0ca6b1648a057b27225"

SRC_DIR = "src/command_modules/azure-cli-dla"
