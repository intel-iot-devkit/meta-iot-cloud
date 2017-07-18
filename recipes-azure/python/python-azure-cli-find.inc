DESCRIPTION = "Microsoft Azure Command-Line Tools Find Command Module"

PV = "0.2.6"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-whoosh \
"

SRCREV = "7e2184a302560e9db30092a95e08b0518a07f22a"

SRC_DIR = "src/command_modules/azure-cli-find"
