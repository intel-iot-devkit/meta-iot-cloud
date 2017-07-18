DESCRIPTION = "Microsoft Azure Command-Line Tools Role Command Module"

PV = "2.0.8"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-authorization \
	${PYTHON_PN}-azure-graphrbac \
	${PYTHON_PN}-azure-keyvault \
	${PYTHON_PN}-pytz \
"

SRCREV = "7b7ca71ef9357ccf8fda846bbc0b558d3355bb0b"

SRC_DIR = "src/command_modules/azure-cli-role"
