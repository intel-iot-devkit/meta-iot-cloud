DESCRIPTION = "Microsoft Azure Command-Line Tools IoT Command Module"

PV = "0.1.9"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-iothub \
	${PYTHON_PN}-pyopenssl \
	${PYTHON_PN}-azure-cli-core \
"

SRCREV = "337dc767392754d96515837b0a3aae2488de14a9"

SRC_DIR = "src/command_modules/azure-cli-iot"
