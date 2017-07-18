DESCRIPTION = "Microsoft Azure Storage Resource Management Client Library for Python"

PV = "1.0.0rc1"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
"

SRCREV = "257092d4a3bc1803ba530881aff63210f553b6d6"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/storage/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_storage-* \
"

SRC_DIR = "azure-mgmt-storage"
