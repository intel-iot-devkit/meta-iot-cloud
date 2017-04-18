DESCRIPTION = "Microsoft Azure Batch Client Library for Python"

PV = "2.0.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/batch/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_batch-* \
"

SRC_DIR = "azure-batch"

SRCREV = "d16770730704df743eedb2d0ae6ee1f2390f9714"
