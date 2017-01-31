DESCRIPTION = "Microsoft Azure Command-Line Tools container Command Module"

PV = "0.1.1b2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-pyyaml \
"

SRCREV = "f681b3180a6487500f0ca21624307eb789835f53"

SRC_DIR = "src/command_modules/azure-cli-container"
