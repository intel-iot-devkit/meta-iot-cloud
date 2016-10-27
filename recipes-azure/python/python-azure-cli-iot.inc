DESCRIPTION = "Microsoft Azure Command-Line Tools IoT Command Module"

PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-iothub \
	${PYTHON_PN}-azure-cli-core \
"

SRC_DIR = "src/command_modules/azure-cli-iot"
