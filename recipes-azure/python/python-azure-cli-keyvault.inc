DESCRIPTION = "Microsoft Azure Command-Line Tools Keyvault Command Module"

PV = "2.0.4"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-keyvault \
	${PYTHON_PN}-azure-keyvault \
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-pyopenssl \
"

SRCREV = "224be455990a572ce87d76c2b58838bbc73290ac"

SRC_DIR = "src/command_modules/azure-cli-keyvault"
