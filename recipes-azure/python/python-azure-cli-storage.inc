DESCRIPTION = "Microsoft Azure Command-Line Tools Storage Command Module"

PV = "2.0.17"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-multiapi-storage \
    ${PYTHON_PN}-azure-mgmt-storage \
    ${PYTHON_PN}-azure-cli-core \
"

SRCREV = "9d7f5b8250f46cc5c3d719e3d3a222ba12235aac"

SRC_DIR = "src/command_modules/azure-cli-storage"
