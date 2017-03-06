DESCRIPTION = "Microsoft Azure Command-Line Tools Feedback Command Module"

PV = "2.0.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-applicationinsights \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "570ad93ad4ef40b8598618b80812de0a8e669993"

SRC_DIR = "src/command_modules/azure-cli-feedback"
