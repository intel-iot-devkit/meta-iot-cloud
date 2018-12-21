DESCRIPTION = "Microsoft Azure Batch AI Client Command-Line Tools"

PV = "0.1.1"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-mgmt-batchai \
    ${PYTHON_PN}-azure-cli-core \
    ${PYTHON_PN}-adal \
"

SRCREV = "dc11f63fa98d9766f7e970079fff67e2fabe4b50"

SRC_DIR = "src/command_modules/azure-cli-batchai"
