DESCRIPTION = "Microsoft Azure Data Lake Analytics Management Client Library for Python"

PV = "0.1.2"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-datalake-nspkg \
"

SRCREV = "ba9f14fa5ad8cb77bdd549bf586de6c588ce4058"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/datalake-analytics/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_datalake-analytics-* \
"

SRC_DIR = "azure-mgmt-datalake-analytics"
