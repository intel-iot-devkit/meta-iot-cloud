DESCRIPTION = "Microsoft Azure Command-Line Tools container Command Module"

PV = "0.1.1b3"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-pyyaml \
"

SRCREV = "31b4fc8095d6b526db2f1df44560cea5d24b34ac"

SRC_DIR = "src/command_modules/azure-cli-container"
