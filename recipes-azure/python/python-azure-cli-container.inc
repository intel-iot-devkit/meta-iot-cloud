DESCRIPTION = "Microsoft Azure Command-Line Tools container Command Module"

PV = "0.1.11"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-mgmt-containerinstance \
    ${PYTHON_PN}-azure-cli-core \
    ${PYTHON_PN}-pyyaml \
"

SRCREV = "6655bc18ac4b9469d87139092aa266f849cff362"

SRC_DIR = "src/command_modules/azure-cli-container"
