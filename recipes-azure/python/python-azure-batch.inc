DESCRIPTION = "Microsoft Azure Batch Client Library for Python"

PV = "2.0.1"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-msrestazure \
"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/batch/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_batch-* \
"

SRC_DIR = "azure-batch"

SRCREV = "7c8ad9f946f98bfdba5747bda81c9e144b1829fe"
