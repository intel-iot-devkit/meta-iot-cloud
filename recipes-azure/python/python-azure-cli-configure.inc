DESCRIPTION = "Microsoft Azure Command-Line Tools Configure Command Module"

PV = "0.1.1b3"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "c5ea123298ef3da3f3507700ee025077ebcb00c6"

SRC_DIR = "src/command_modules/azure-cli-configure"
