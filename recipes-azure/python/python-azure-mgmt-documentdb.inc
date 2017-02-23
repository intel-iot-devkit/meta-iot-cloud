DESCRIPTION = "Microsoft Azure DocumentDB Management Client Library"

PV = "0.1.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "f43aa44e0f4f0d3f0ccbdc1487baaf2eb3b1f638"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/documentdb/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_documentdb-* \
"

SRC_DIR = "azure-mgmt-documentdb"
