DESCRIPTION = "Microsoft Azure Data Lake Store Management Client Library for Python"

PV = "0.1.2"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-datalake-nspkg \
"

SRCREV = "b429e7019983a0ab7007496950829cf57fc971e2"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/datalake-store/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_datalake-store-* \
"

SRC_DIR = "azure-mgmt-datalake-store"
