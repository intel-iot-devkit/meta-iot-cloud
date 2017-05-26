DESCRIPTION = "Microsoft Azure Command-Line Tools IoT Command Module"

PV = "0.1.5"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-iothub \
	${PYTHON_PN}-pyopenssl \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "872f0154be56ecbd2fd5e27a3485db1196608b7d"

SRC_DIR = "src/command_modules/azure-cli-iot"
