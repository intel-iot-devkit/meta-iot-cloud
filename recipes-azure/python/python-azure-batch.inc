DESCRIPTION = "Microsoft Azure Batch Client Library for Python"

PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/batch/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_batch-* \
"

SRC_DIR = "azure-batch"
SRCREV = "0e1e1870b6628896cfed4fffa176a4fb1cd697dc"
