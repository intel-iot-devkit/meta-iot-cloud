DESCRIPTION = "Microsoft Azure Command-Line Tools Resource Command Module"

PV = "2.0.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-resource \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "6daa5696ac274d4d311b149c9b7266f702cce438"

SRC_DIR = "src/command_modules/azure-cli-resource"
