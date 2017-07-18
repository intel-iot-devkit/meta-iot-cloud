DESCRIPTION = "Microsoft Azure Traffic Manager Client Library for Python"

PV = "0.30.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-msrestazure \
"

SRCREV = "0acbdaf956dfcb9e759fc90dd2929935e6c2c417"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/trafficmanager/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_trafficmanager-* \
"

SRC_DIR = "azure-mgmt-trafficmanager"
