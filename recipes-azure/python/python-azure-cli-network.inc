DESCRIPTION = "Microsoft Azure Command-Line Tools Network Command Module"

PV = "2.0.16"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-mgmt-network \
    ${PYTHON_PN}-azure-mgmt-trafficmanager \
    ${PYTHON_PN}-azure-mgmt-dns \
    ${PYTHON_PN}-azure-mgmt-resource \
    ${PYTHON_PN}-azure-cli-core \
"

SRCREV = "70d79b303f7875932fde4557fb322b6e02de686a"

SRC_DIR = "src/command_modules/azure-cli-network"
