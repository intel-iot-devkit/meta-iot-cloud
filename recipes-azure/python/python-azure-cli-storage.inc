DESCRIPTION = "Microsoft Azure Command-Line Tools Storage Command Module"

PV = "2.0.3"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-multiapi-storage \
	${PYTHON_PN}-azure-mgmt-storage \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "e9d80f82ff9d1ace098f1690f880747a2d1fafe0"

SRC_DIR = "src/command_modules/azure-cli-storage"
