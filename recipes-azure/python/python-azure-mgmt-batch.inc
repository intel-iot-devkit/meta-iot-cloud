DESCRIPTION = "Microsoft Azure Batch Management Client Library for Python"

PV = "3.0.1"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "d1396e1e3f0d8edd33d8e1e64b000418db536ade"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/batch/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_batch-* \
"

SRC_DIR = "azure-mgmt-batch"
