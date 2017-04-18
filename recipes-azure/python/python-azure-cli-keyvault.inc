DESCRIPTION = "Microsoft Azure Command-Line Tools Keyvault Command Module"

PV = "2.0.1"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-keyvault \
	${PYTHON_PN}-azure-keyvault \
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-pyopenssl \
"

SRCREV = "fbe4430abcf8bc36d35dae8c3bee3c3216b30864"

SRC_DIR = "src/command_modules/azure-cli-keyvault"
