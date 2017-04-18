DESCRIPTION = "Microsoft Azure Command-Line Tools DevTestLabs Command Module"

PV = "0.0.2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-graphrbac \
"

SRCREV = "a0a8275062df769f1eb375514d0cdec47a7e348c"

SRC_DIR = "src/command_modules/azure-cli-lab"
