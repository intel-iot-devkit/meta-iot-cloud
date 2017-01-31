DESCRIPTION = "Microsoft Azure Command-Line Tools Keyvault Command Module"

PV = "0.1.1b3"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-keyvault \
	${PYTHON_PN}-azure-keyvault \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "86a2cd1d8ce1ece6b3e3444c4e59a7571c6493c5"

SRC_DIR = "src/command_modules/azure-cli-keyvault"
