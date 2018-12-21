DESCRIPTION = "Microsoft Azure Command-Line Tools IoT Command Module"

PV = "0.1.12"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-mgmt-iothub \
    ${PYTHON_PN}-pyopenssl \
    ${PYTHON_PN}-azure-cli-core \
"

SRCREV = "c94e524373a99f718e2a02361f46a9d81ae9f943"

SRC_DIR = "src/command_modules/azure-cli-iot"
