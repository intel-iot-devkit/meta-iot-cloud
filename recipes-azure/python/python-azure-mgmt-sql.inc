DESCRIPTION = "Microsoft Azure SQL Management Client Library for Python"

PV = "0.4.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-mgmt-nspkg \
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-msrestazure \
"

SRCREV = "f0600b9d80ae608685f1b4cf99aa764bdf4b0902"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/sql/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_sql-* \
"

SRC_DIR = "azure-mgmt-sql"
