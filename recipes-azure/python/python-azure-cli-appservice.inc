DESCRIPTION = "Microsoft Azure Command-Line Tools AppService Command Module"

PV = "0.1.3"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-web \
	${PYTHON_PN}-urllib3 \
	${PYTHON_PN}-xmltodict \
	${PYTHON_PN}-pyopenssl \
"

SRCREV = "e805e32ae6935bf795a5d83576b4eee0189e7f61"

SRC_DIR = "src/command_modules/azure-cli-appservice"
