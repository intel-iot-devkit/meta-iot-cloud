DESCRIPTION = "Microsoft Azure Command-Line Tools Resource Command Module"

PV = "2.0.10"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-resource \
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-authorization \
"

SRCREV = "f8e64f6977e1b8bd43bc48bbbb605682f800aead"

SRC_DIR = "src/command_modules/azure-cli-resource"
