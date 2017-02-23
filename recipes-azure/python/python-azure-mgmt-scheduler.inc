DESCRIPTION = "Microsoft Azure Scheduler Management Client Library for Python"

PV = "1.1.1"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "3d27e4f3c58e404640521026e6a443e72e618454"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/scheduler/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_scheduler-* \
"

SRC_DIR = "azure-mgmt-scheduler"
