DESCRIPTION = "Microsoft Azure SQL Management Client Library for Python"

PV = "0.8.1"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-msrestazure \
    ${PYTHON_PN}-azure-common \
"

SRCREV = "6059e27f417e27107a9e070b4b85ad47da611b50"

FILES_${PN} = "\
    ${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/sql/* \
    ${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_sql-* \
"

SRC_DIR = "azure-mgmt-sql"
