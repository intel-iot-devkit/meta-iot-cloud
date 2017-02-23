DESCRIPTION = "Microsoft Azure Command-Line Tools DocumentDB Command Module"

PV = "0.1.1b2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-documentdb \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "d177d85d45dc17c82b0091860396fb790bd386b1"

SRC_DIR = "src/command_modules/azure-cli-databasedb"
