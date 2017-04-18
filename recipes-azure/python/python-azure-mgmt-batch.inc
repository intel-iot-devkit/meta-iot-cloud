DESCRIPTION = "Microsoft Azure Batch Management Client Library for Python"

PV = "3.0.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "07d2ac1fca0fa3eedd88e94fad313bdc1b03d0ac"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/batch/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_batch-* \
"

SRC_DIR = "azure-mgmt-batch"
