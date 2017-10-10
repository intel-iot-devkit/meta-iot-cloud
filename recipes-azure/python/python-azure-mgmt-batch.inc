DESCRIPTION = "Microsoft Azure Batch Management Client Library for Python"

PV = "4.1.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-common \
"

SRCREV = "140dda2288fe9e2f3490d12ed53276af95c1d1cd"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/batch/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_batch-* \
"

SRC_DIR = "azure-mgmt-batch"
