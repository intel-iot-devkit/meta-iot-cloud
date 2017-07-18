DESCRIPTION = "Microsoft Azure Command-Line Tools AppService Command Module"

PV = "0.1.10"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-web \
	${PYTHON_PN}-azure-mgmt-containerregistry \
	${PYTHON_PN}-urllib3 \
	${PYTHON_PN}-xmltodict \
	${PYTHON_PN}-pyopenssl \
	${PYTHON_PN}-vsts-cd-manager \
"

SRCREV = "9f1b479a064a01cf4f0017441b41c0d2ee33e218"

SRC_DIR = "src/command_modules/azure-cli-appservice"
