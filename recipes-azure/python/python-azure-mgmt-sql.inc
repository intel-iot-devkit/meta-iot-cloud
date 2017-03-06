DESCRIPTION = "Microsoft Azure SQL Management Client Library for Python"

PV = "0.3.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "2f35bab36e4acdaf6386ca9432b17566b26b5966"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/sql/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_sql-* \
"

SRC_DIR = "azure-mgmt-sql"
