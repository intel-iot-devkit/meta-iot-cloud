DESCRIPTION = "Microsoft Azure Command-Line Tools Content Delivery Network (CDN) Command Module"

PV = "0.0.6"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-cdn \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "cb52a3c12408f37e041d4a5552e2294af0dcdae4"

SRC_DIR = "src/command_modules/azure-cli-cdn"
