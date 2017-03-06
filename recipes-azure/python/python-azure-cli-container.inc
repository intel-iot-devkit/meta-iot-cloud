DESCRIPTION = "Microsoft Azure Command-Line Tools container Command Module"

PV = "0.1.1b4"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-pyyaml \
"

SRCREV = "b2dfe6efae982cc390c8ceabc385ca0d4ffdbaba"

SRC_DIR = "src/command_modules/azure-cli-container"
