DESCRIPTION = "Microsoft Azure Command-Line Tools Cognitive Services Command Module"

PV = "0.1.6"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-cognitiveservices \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "8981d5fd5ad08315d988256b4bb6e1487d7e1018"

SRC_DIR = "src/command_modules/azure-cli-cognitiveservices"
