DESCRIPTION = "Microsoft Azure Command-Line Tools Storage Command Module"

PV = "0.1.2rc2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-storage \
	${PYTHON_PN}-azure-mgmt-storage \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "8dcf04ab6c1dd9bdea041441c8336331e689639e"

SRC_DIR = "src/command_modules/azure-cli-storage"
