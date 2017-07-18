DESCRIPTION = "Microsoft Azure Batch Management Client Library for Python"

PV = "4.0.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "66bdc0c1fbfd4c2c6f68ad26d55603e2ff2c7b73"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/batch/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_batch-* \
"

SRC_DIR = "azure-mgmt-batch"
