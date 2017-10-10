DESCRIPTION = "Microsoft Azure Command-Line Tools Billing Command Module"

PV = "0.1.5"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-billing \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "92f6f59c22f1ce44a0250103ba252989fb899ba6"

SRC_DIR = "src/command_modules/azure-cli-billing"
