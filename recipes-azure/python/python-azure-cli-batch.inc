DESCRIPTION = "Microsoft Azure Command-Line Tools Batch Command Module"

PV = "2.0.1"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-batch \
	${PYTHON_PN}-azure-mgmt-batch \
	${PYTHON_PN}-azure-mgmt-keyvault \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "8935d27c4cc7b6a2b0ae3118bde485af02a481b6"

SRC_DIR = "src/command_modules/azure-cli-batch"
