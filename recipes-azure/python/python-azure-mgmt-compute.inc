DESCRIPTION = "Microsoft Azure Compute Resource Management Client Library for Python"

PV = "3.0.1"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-azure-common \
    ${PYTHON_PN}-msrestazure \
"

SRCREV = "06c79c78859f27206f0f9a3ed5ffdf904167097a"

FILES_${PN} = "\
    ${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/compute/* \
    ${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_compute-* \
"

SRC_DIR = "azure-mgmt-compute"
