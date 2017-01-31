DESCRIPTION = "Microsoft Azure Command-Line Tools IoT Command Module"

PV = "0.1.1b2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-iothub \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "fa096aab12aea0f8507be1dca3c5a3db2181c3b8"

SRC_DIR = "src/command_modules/azure-cli-iot"
