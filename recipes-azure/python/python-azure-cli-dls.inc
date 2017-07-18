DESCRIPTION = "Microsoft Azure Command-Line Tools Data Lake Store Command Module"

PV = "0.0.10"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-datalake-store \
	${PYTHON_PN}-azure-datalake-store \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "014a2c0f9d4f3d23c44c13e75fef49de96d47790"

SRC_DIR = "src/command_modules/azure-cli-dls"
