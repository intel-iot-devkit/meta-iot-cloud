DESCRIPTION = "Microsoft Azure Command-Line Tools Data Lake Store Command Module"

PV = "0.0.6"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-datalake-store \
	${PYTHON_PN}-azure-datalake-store \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "ec79d2f6e8e070bc29c5396430968717b19a871e"

SRC_DIR = "src/command_modules/azure-cli-dls"
