DESCRIPTION = "Microsoft Azure Network Resource Management Client Library for Python"

PV = "1.0.0rc3"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "10907f8124829582bc98b955f4ecafd745ffdfb4"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/network/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_network-* \
"

SRC_DIR = "azure-mgmt-network"
