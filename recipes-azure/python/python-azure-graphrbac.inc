DESCRIPTION = "Microsoft Azure Graph RBAC Resource Management Client Library for Python"

PV = "0.31.0"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-msrestazure \
    ${PYTHON_PN}-azure-common \
"

SRCREV = "9070d94923aa27ec715374b610e6125774767c85"

FILES_${PN} = "\
        ${PYTHON_SITEPACKAGES_DIR}/azure/graphrbac/* \
        ${PYTHON_SITEPACKAGES_DIR}/azure_graphrbac-* \
"

SRC_DIR = "azure-graphrbac"
