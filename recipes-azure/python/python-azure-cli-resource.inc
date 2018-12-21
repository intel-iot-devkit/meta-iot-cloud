DESCRIPTION = "Microsoft Azure Command-Line Tools Resource Command Module"

PV = "2.0.16"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-mgmt-resource \
    ${PYTHON_PN}-azure-cli-core \
    ${PYTHON_PN}-azure-mgmt-authorization \
"

SRCREV = "88fada62f74b135f556f11a4328af847f336d536"

SRC_DIR = "src/command_modules/azure-cli-resource"
