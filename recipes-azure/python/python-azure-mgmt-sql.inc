DESCRIPTION = "Microsoft Azure SQL Management Client Library for Python"

PV = "0.6.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "d28a73d3c7dc9ee06927cc28050cb397a8da9ac9"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/sql/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_sql-* \
"

SRC_DIR = "azure-mgmt-sql"
