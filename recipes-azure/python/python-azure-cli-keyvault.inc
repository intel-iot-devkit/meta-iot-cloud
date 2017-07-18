DESCRIPTION = "Microsoft Azure Command-Line Tools Keyvault Command Module"

PV = "2.0.8"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-keyvault \
	${PYTHON_PN}-azure-keyvault \
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-pyopenssl \
"

SRCREV = "42fca23d6179941c3c5ecfd0a899aef58c626cf8"

SRC_DIR = "src/command_modules/azure-cli-keyvault"
