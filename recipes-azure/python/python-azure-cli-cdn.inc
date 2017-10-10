DESCRIPTION = "Microsoft Azure Command-Line Tools Content Delivery Network (CDN) Command Module"

PV = "0.0.9"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-cdn \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "92343692a9f718bc800c52dbfd322a95a5b42080"

SRC_DIR = "src/command_modules/azure-cli-cdn"
