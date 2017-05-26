DESCRIPTION = "Microsoft Azure Command-Line Interactive Shell"

PV = "0.3.1"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-applicationinsights \
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-jmespath \
	${PYTHON_PN}-prompt-toolkit \
	${PYTHON_PN}-pyyaml \
	${PYTHON_PN}-six \
"

SRCREV = "21355e7a601adcc2c57634fbfa9b76b5d4a00b3b"

SRC_DIR = "src/command_modules/azure-cli-interactive"
