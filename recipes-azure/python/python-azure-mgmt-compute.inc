DESCRIPTION = "Microsoft Azure Compute Resource Management Client Library for Python"

PV = "1.0.0rc1"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "907840a73017b4a9116f1f781489364d7cef97d7"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/compute/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_compute-* \
"

SRC_DIR = "azure-mgmt-compute"
