DESCRIPTION = "Microsoft Azure Network Resource Management Client Library for Python"

PV = "1.0.0rc1"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-msrestazure \
"

SRCREV = "72f27fcd9aa6721a51daeab8d6d27d50966f7fe4"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/network/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_network-* \
"

SRC_DIR = "azure-mgmt-network"
