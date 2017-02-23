DESCRIPTION = "Microsoft Azure Traffic Manager Client Library for Python"

PV = "0.30.0rc6"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "97a882a81c9c6d0f297d06b4f89e5241cd7825f9"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/trafficmanager/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_trafficmanager-* \
"

SRC_DIR = "azure-mgmt-trafficmanager"
