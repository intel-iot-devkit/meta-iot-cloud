DESCRIPTION = "Microsoft Azure Command-Line Tools IoT Command Module"

PV = "0.1.1b3"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-iothub \
	${PYTHON_PN}-pyopenssl \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "35901e18f75bcf0047e521e2e7d51a590cb55b28"

SRC_DIR = "src/command_modules/azure-cli-iot"
