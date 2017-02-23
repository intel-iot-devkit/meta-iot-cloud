DESCRIPTION = "Microsoft Azure Command-Line Tools Cloud Command Module"

PV = "0.1.2rc2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "99690395a5e889a1df90a33e58f89719a7c86728"

SRC_DIR = "src/command_modules/azure-cli-cloud"
