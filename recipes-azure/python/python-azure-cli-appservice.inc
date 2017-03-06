DESCRIPTION = "Microsoft Azure Command-Line Tools AppService Command Module"

PV = "0.1.1b5"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-web \
	${PYTHON_PN}-urllib3 \
	${PYTHON_PN}-pyopenssl \
"

SRCREV = "e27563970b6d3d1bdd04332f862e74c997f8b017"

SRC_DIR = "src/command_modules/azure-cli-appservice"
