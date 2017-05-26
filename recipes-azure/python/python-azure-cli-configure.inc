DESCRIPTION = "Microsoft Azure Command-Line Tools Configure Command Module"

PV = "2.0.6"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "8d2f56c7591f41be97b33f1892c6fa8313064a5f"

SRC_DIR = "src/command_modules/azure-cli-configure"
