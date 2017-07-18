DESCRIPTION = "Microsoft Azure Network Resource Management Client Library for Python"

PV = "1.2.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-common \
"

SRCREV = "724ac8571f9425145bbccd0355a7b8c96eb696c5"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/network/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_network-* \
"

SRC_DIR = "azure-mgmt-network"
