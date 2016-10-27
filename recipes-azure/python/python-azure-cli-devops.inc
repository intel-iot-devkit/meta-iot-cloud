DESCRIPTION = "Microsoft Azure Command-Line Tools DevOps Command Module"

PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-pyyaml \
"

SRC_DIR = "src/command_modules/azure-cli-context"
