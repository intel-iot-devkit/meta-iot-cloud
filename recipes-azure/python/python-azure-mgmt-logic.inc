DESCRIPTION = "Microsoft Azure LogicApps Management Client Library for Python"

PV = "1.0.0"
PR = "r1"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-common \
"

SRCREV = "f3650cc8b1a84aef80139ad1bed7341fe871c470"

FILES_${PN} = "\
    ${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/logic/* \
    ${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_logic-* \
"

SRC_DIR = "azure-mgmt-logic"
