DESCRIPTION = "Microsoft Azure Command-Line Tools ACS Command Module"

PV = "2.0.17"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-mgmt-authorization \
    ${PYTHON_PN}-azure-mgmt-compute \
    ${PYTHON_PN}-azure-mgmt-containerservice \
    ${PYTHON_PN}-azure-graphrbac \
    ${PYTHON_PN}-azure-cli-core \
    ${PYTHON_PN}-paramiko \
    ${PYTHON_PN}-pyyaml \
    ${PYTHON_PN}-six \
    ${PYTHON_PN}-scp \
    ${PYTHON_PN}-sshtunnel \
"

SRCREV = "614d07127cb94ca5ad12b9416294e97160a23b02"

SRC_DIR = "src/command_modules/azure-cli-acs"
