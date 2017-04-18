DESCRIPTION = "Microsoft Azure Command-Line Tools container Command Module"

PV = "0.1.3"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-pyyaml \
"

SRCREV = "5a92eb07b40f45f757f88c6a111799f22787705d"

SRC_DIR = "src/command_modules/azure-cli-container"
