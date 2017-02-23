DESCRIPTION = "Microsoft Azure Compute Resource Management Client Library for Python"

PV = "0.33.1rc1"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "77dd758257364966bf04b04ad16f13c7be61dc61"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/compute/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_compute-* \
"

SRC_DIR = "azure-mgmt-compute"
