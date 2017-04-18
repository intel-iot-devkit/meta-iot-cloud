DESCRIPTION = "Microsoft Azure DocumentDB Management Client Library"

PV = "0.1.1"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "62f900d177033035e7be174ee652eaf66276af4f"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/documentdb/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_documentdb-* \
"

SRC_DIR = "azure-mgmt-documentdb"
