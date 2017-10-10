DESCRIPTION = "Microsoft Azure Container Service Client Library for Python"

PV = "1.0.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-common \
"

SRCREV = "d8caae2a937390f7bb74af78e791d40fe5c81afb"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/containerservice/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_containerservice-* \
"

SRC_DIR = "azure-mgmt-containerservice"
