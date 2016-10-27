DESCRIPTION = "Microsoft Azure Command-Line Tools Webapp Command Module"

PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-cli-core \
	${PYTHON_PN}-azure-mgmt-web \
	${PYTHON_PN}-urllib3 \
"

SRC_DIR = "src/command_modules/azure-cli-webapp"
