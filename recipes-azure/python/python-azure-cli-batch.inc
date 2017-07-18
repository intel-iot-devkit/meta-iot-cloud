DESCRIPTION = "Microsoft Azure Command-Line Tools Batch Command Module"

PV = "3.0.3"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-batch \
	${PYTHON_PN}-azure-mgmt-batch \
	${PYTHON_PN}-azure-mgmt-keyvault \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "2f5f5bfa6db28e61c4c5c59709ba02644c152f86"

SRC_DIR = "src/command_modules/azure-cli-batch"
