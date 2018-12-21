DESCRIPTION = "Microsoft Azure Command-Line Tools ACR Command Module"

PV = "2.0.13"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-cli-core \
    ${PYTHON_PN}-azure-mgmt-resource \
    ${PYTHON_PN}-azure-mgmt-storage \
    ${PYTHON_PN}-azure-mgmt-containerregistry \
"

SRCREV = "c2e4386362afc9d8c0cb54f73c3cd3fe8a32e1dd"

SRC_DIR = "src/command_modules/azure-cli-acr"
