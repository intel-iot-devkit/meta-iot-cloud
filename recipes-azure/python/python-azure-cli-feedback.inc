DESCRIPTION = "Microsoft Azure Command-Line Tools Feedback Command Module"

PV = "2.0.1"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-applicationinsights \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "c06b7b32f6c9ca3c450f5069b3a3ecab8226b45e"

SRC_DIR = "src/command_modules/azure-cli-feedback"
