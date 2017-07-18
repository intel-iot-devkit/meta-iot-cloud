DESCRIPTION = "Microsoft Azure Command-Line Interactive Shell"

PV = "0.3.6"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-applicationinsights \
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-jmespath \
	${PYTHON_PN}-prompt-toolkit \
	${PYTHON_PN}-pyyaml \
	${PYTHON_PN}-six \
"

SRCREV = "e6a6fd66529389f52ae4b068c27b5f492942a4fc"

SRC_DIR = "src/command_modules/azure-cli-interactive"
