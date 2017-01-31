DESCRIPTION = "Microsoft Azure Command-Line Tools Feedback Command Module"

PV = "0.1.1b2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-applicationinsights \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "89efd19f4a833ccdd32663b11578e2052d0177bb"

SRC_DIR = "src/command_modules/azure-cli-feedback"
