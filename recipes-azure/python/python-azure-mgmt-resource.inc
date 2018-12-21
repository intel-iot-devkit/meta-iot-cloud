DESCRIPTION = "Microsoft Azure Resource Management Client Library for Python"

PV = "1.2.0rc3"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-msrestazure \
    ${PYTHON_PN}-azure-common \
"

SRCREV = "5a21dbd55ddbefe028a5f0a72d900bf253744daa"

FILES_${PN} = "\
    ${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/resource/* \
    ${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_resource-* \
"

SRC_DIR = "azure-mgmt-resource"
