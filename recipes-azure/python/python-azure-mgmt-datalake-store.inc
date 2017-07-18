DESCRIPTION = "Microsoft Azure Data Lake Store Management Client Library for Python"

PV = "0.1.6"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-mgmt-datalake-nspkg \
"

SRCREV = "4724fa7ff0cc9610a05666a036a6b1f29318d1c7"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/datalake/store/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_datalake_store-* \
"

SRC_DIR = "azure-mgmt-datalake-store"
