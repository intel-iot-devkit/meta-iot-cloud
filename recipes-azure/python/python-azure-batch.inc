DESCRIPTION = "Microsoft Azure Batch Client Library for Python"

PV = "3.0.0"
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

SRCREV = "66bdc0c1fbfd4c2c6f68ad26d55603e2ff2c7b73"
