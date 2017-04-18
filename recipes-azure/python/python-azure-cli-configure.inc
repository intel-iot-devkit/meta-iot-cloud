DESCRIPTION = "Microsoft Azure Command-Line Tools Configure Command Module"

PV = "2.0.3"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "f503aba6ede1b53969b749db84d7174a37b84b8f"

SRC_DIR = "src/command_modules/azure-cli-configure"
