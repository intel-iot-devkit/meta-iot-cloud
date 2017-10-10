DESCRIPTION = "Microsoft Azure BatchAI Management Client Library for Python"

PV = "0.2.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-common \
"

SRCREV = "dcc71a6eff211743b99b27988536ce3f94495401"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/batchai/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_batchai-* \
"

SRC_DIR = "azure-mgmt-batchai"
