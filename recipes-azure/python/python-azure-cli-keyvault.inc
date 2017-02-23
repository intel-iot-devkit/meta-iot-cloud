DESCRIPTION = "Microsoft Azure Command-Line Tools Keyvault Command Module"

PV = "0.1.1b5"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-keyvault \
	${PYTHON_PN}-azure-keyvault \
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-pyopenssl \
"

SRCREV = "ee38a714c5d2941d27e886d6e5f37da94f762202"

SRC_DIR = "src/command_modules/azure-cli-keyvault"
