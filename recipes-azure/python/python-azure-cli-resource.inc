DESCRIPTION = "Microsoft Azure Command-Line Tools Resource Command Module"

PV = "2.0.6"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-resource \
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-authorization \
"

SRCREV = "df39e1d9f4eea30b3cad7523a15e1da1bb1520f6"

SRC_DIR = "src/command_modules/azure-cli-resource"
