DESCRIPTION = "Microsoft Azure Command-Line Tools Extension Command Module"

PV = "0.0.4"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "0989d9a785d8263aab2a52948d0c4cadff82b535"

SRC_DIR = "src/command_modules/azure-cli-extension"
