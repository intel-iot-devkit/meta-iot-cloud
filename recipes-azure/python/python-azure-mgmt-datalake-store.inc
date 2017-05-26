DESCRIPTION = "Microsoft Azure Data Lake Store Management Client Library for Python"

PV = "0.1.4"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-datalake-nspkg \
"

SRCREV = "b7be11b5f228d1b76485624d0f1a1c740069910a"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/datalake/store/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_datalake_store-* \
"

SRC_DIR = "azure-mgmt-datalake-store"
