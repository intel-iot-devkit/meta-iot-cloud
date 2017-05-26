DESCRIPTION = "Microsoft Azure Data Lake Analytics Management Client Library for Python"

PV = "0.1.4"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-mgmt-datalake-nspkg \
"

SRCREV = "cbbab80abf89273fa1eee4137bde880cdf7a76b9"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/datalake/analytics/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_datalake_analytics-* \
"

SRC_DIR = "azure-mgmt-datalake-analytics"
