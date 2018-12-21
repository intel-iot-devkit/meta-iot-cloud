DESCRIPTION = "Microsoft Azure Command-Line Tools Role Command Module"

PV = "2.0.13"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-cli-core \
    ${PYTHON_PN}-azure-mgmt-authorization \
    ${PYTHON_PN}-azure-graphrbac \
    ${PYTHON_PN}-azure-keyvault \
    ${PYTHON_PN}-pytz \
"

SRCREV = "9ab8cd688ec6aeb73d9a5ab6a659c0b47e39b559"

SRC_DIR = "src/command_modules/azure-cli-role"
