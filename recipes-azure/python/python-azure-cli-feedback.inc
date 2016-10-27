DESCRIPTION = "Microsoft Azure Command-Line Tools Feedback Command Module"

PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-applicationinsights \
	${PYTHON_PN}-azure-cli-core \
"

SRC_DIR = "src/command_modules/azure-cli-feedback"
