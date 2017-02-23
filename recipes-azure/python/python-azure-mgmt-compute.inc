DESCRIPTION = "Microsoft Azure Compute Resource Management Client Library for Python"

PV = "0.32.1"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "301703ef34addc53366f271a9e2ca8fc1ae085eb"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/compute/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_compute-* \
"

SRC_DIR = "azure-mgmt-compute"
