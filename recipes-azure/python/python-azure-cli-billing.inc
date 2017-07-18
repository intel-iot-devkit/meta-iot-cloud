DESCRIPTION = "Microsoft Azure Command-Line Tools Billing Command Module"

PV = "0.1.3"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-billing \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "f27d0d7ad63384b29c8a61971830846cb6f089e7"

SRC_DIR = "src/command_modules/azure-cli-billing"
