DESCRIPTION = "Microsoft Azure Command-Line Tools AppService Command Module"

PV = "0.1.1b4"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-web \
	${PYTHON_PN}-urllib3 \
	${PYTHON_PN}-pyopenssl \
"

SRCREV = "7f686eeb3a1809b5a10f5732fb324dc103ffaeef"

SRC_DIR = "src/command_modules/azure-cli-appservice"
