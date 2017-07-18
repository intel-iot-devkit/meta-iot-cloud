DESCRIPTION = "Microsoft Azure Command-Line Tools Feedback Command Module"

PV = "2.0.6"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-applicationinsights \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "d402aa593e41a9b20cfc89adde08455ec39651cd"

SRC_DIR = "src/command_modules/azure-cli-feedback"
