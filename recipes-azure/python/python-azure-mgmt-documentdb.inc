DESCRIPTION = "Microsoft Azure DocumentDB Management Client Library for Python"

PV = "0.1.3"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-msrestazure \
    ${PYTHON_PN}-azure-common \
"

SRCREV = "858794d9375dc2ffa3142001691dcb54b9964e91"

FILES_${PN} = "\
    ${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/documentdb/* \
    ${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_documentdb-* \
"

SRC_DIR = "azure-mgmt-documentdb"
