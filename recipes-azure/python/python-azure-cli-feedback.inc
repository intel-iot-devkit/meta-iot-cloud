DESCRIPTION = "Microsoft Azure Command-Line Tools Feedback Command Module"

PV = "2.0.2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-applicationinsights \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "44381a9768990fcfbfba1b39c9ba7df33f0cc0a1"

SRC_DIR = "src/command_modules/azure-cli-feedback"
