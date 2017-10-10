DESCRIPTION = "Microsoft Azure Command-Line Tools Cognitive Services Command Module"

PV = "0.1.8"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-cognitiveservices \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "fedb1d3a0ad7a22bea81d3275fe617bff35a145f"

SRC_DIR = "src/command_modules/azure-cli-cognitiveservices"
