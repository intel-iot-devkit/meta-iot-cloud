DESCRIPTION = "Microsoft Azure Command-Line Tools Keyvault Command Module"

PV = "2.0.12"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-keyvault \
	${PYTHON_PN}-azure-keyvault \
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-pyopenssl \
"

SRCREV = "d4d03e7dd89aaa9cbf7e938a3c29246b054c3347"

SRC_DIR = "src/command_modules/azure-cli-keyvault"
