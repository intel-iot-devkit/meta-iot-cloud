DESCRIPTION = "Microsoft Azure Command-Line Tools DevTestLabs Command Module"

PV = "0.0.11"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-cli-core \
    ${PYTHON_PN}-azure-graphrbac \
    ${PYTHON_PN}-azure-mgmt-devtestlabs \
"

SRCREV = "5798bd5b46588774b3c9ead2a313efbd155e1ebe"

SRC_DIR = "src/command_modules/azure-cli-lab"
