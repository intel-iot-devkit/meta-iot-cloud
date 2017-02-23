DESCRIPTION = "Microsoft Azure Storage Resource Management Client Library for Python"

PV = "0.31.0"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "5db7d95611e7fabf67365d7d47ea32b4754424e4"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/storage/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_storage-* \
"

SRC_DIR = "azure-mgmt-storage"
