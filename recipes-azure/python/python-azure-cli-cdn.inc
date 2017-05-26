DESCRIPTION = "Microsoft Azure Command-Line Tools Content Delivery Network (CDN) Command Module"

PV = "0.0.2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-cdn \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "6fb8552835c7cda970bbe3828b969a655e6a12a7"

SRC_DIR = "src/command_modules/azure-cli-cdn"
