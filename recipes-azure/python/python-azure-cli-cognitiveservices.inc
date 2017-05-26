DESCRIPTION = "Microsoft Azure Command-Line Tools Cognitive Services Command Module"

PV = "0.1.2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-cognitiveservices \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "6fc9977fb3a34825e7141e748acf2c86369c9134"

SRC_DIR = "src/command_modules/azure-cli-cognitiveservices"
