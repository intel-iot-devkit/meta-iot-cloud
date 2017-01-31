DESCRIPTION = "Microsoft Azure Command-Line Tools AppService Command Module"

PV = "0.1.1b2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-web \
	${PYTHON_PN}-urllib3 \
"

SRCREV = "6b8e7f22676aba0b303600c548b26833e718c450"

SRC_DIR = "src/command_modules/azure-cli-appservice"
