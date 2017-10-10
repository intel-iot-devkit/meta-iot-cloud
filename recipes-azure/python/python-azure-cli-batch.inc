DESCRIPTION = "Microsoft Azure Command-Line Tools Batch Command Module"

PV = "3.1.5"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-batch \
	${PYTHON_PN}-azure-batch-extensions \
	${PYTHON_PN}-azure-mgmt-batch \
	${PYTHON_PN}-azure-mgmt-keyvault \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "b7d9912f55b68b63292adacbcf9ab624ad02b0ed"

SRC_DIR = "src/command_modules/azure-cli-batch"
