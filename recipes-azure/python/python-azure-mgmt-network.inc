DESCRIPTION = "Microsoft Azure Network Resource Management Client Library for Python"

PV = "1.5.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-common \
"

SRCREV = "3faba8057288c807e91e59cae92c5f2c6220814f"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/network/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_network-* \
"

SRC_DIR = "azure-mgmt-network"
