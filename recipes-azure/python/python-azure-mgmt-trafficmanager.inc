DESCRIPTION = "Microsoft Azure Traffic Manager Client Library for Python"

PV = "0.40.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-common \
"

SRCREV = "d2b8d92fdaeff2c5650a298c322cd20ef117a1da"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/trafficmanager/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_trafficmanager-* \
"

SRC_DIR = "azure-mgmt-trafficmanager"
