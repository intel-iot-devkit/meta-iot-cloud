DESCRIPTION = "Microsoft Azure Command-Line Tools Batch Command Module"

PV = "2.0.4"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-batch \
	${PYTHON_PN}-azure-mgmt-batch \
	${PYTHON_PN}-azure-mgmt-keyvault \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "24a8b5155f23b23b7e1ceda3d0fbe1dbed89d515"

SRC_DIR = "src/command_modules/azure-cli-batch"
