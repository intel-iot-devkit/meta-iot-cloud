DESCRIPTION = "Microsoft Azure Command-Line Tools AppService Command Module"

PV = "0.1.6"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-web \
	${PYTHON_PN}-urllib3 \
	${PYTHON_PN}-xmltodict \
	${PYTHON_PN}-pyopenssl \
	${PYTHON_PN}-vsts-cd-manager \
"

SRCREV = "5f23b699df361a89871c99e91b4c587ea9029f70"

SRC_DIR = "src/command_modules/azure-cli-appservice"
