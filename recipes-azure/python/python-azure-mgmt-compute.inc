DESCRIPTION = "Microsoft Azure Compute Resource Management Client Library for Python"

PV = "2.0.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-msrestazure \
"

SRCREV = "7b4e427ac21257ef972155cd9be5a51fc6d223cb"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/compute/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_compute-* \
"

SRC_DIR = "azure-mgmt-compute"
