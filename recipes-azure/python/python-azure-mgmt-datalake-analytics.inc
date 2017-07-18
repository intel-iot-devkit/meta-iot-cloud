DESCRIPTION = "Microsoft Azure Data Lake Analytics Management Client Library for Python"

PV = "0.1.6"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-mgmt-datalake-nspkg \
"

SRCREV = "6001b03e34088ef939a0964df7de586d0b21400b"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/datalake/analytics/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_datalake_analytics-* \
"

SRC_DIR = "azure-mgmt-datalake-analytics"
