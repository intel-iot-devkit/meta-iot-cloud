DESCRIPTION = "Microsoft Azure Command-Line Tools Storage Command Module"

PV = "2.0.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-storage \
	${PYTHON_PN}-azure-mgmt-storage \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "b4a581a49adae9a041b41285ea90fad44b90b43e"

SRC_DIR = "src/command_modules/azure-cli-storage"
