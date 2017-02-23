DESCRIPTION = "Microsoft Azure Command-Line Tools Profile Command Module"

PV = "0.1.2rc2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-adal \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "3de939655973a8d91f2e5cdb15babaca3327f4a2"

SRC_DIR = "src/command_modules/azure-cli-profile"
