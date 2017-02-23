DESCRIPTION = "Microsoft Azure Network Resource Management Client Library for Python"

PV = "0.31.0"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "00852ca7ec8bee1ba3b4f8c122fa70b61aa63559"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/network/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_network-* \
"

SRC_DIR = "azure-mgmt-network"
