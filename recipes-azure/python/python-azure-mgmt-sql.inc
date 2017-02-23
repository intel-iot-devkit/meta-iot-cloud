DESCRIPTION = "Microsoft Azure SQL Management Client Library for Python"

PV = "0.2.0"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "955844c15faee8322d7d7876144f7c5d723df03d"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/sql/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_sql-* \
"

SRC_DIR = "azure-mgmt-sql"
