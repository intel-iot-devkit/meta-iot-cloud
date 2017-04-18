DESCRIPTION = "Microsoft Azure Command-Line Tools Resource Command Module"

PV = "2.0.3"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-resource \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "a18c73ec888924c85c587f16e76bbf8f9e033833"

SRC_DIR = "src/command_modules/azure-cli-resource"
