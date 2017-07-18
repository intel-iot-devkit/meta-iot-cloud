DESCRIPTION = "Microsoft Azure DevTestLabs Management Client Library for Python"

PV = "2.0.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-common \
"

SRCREV = "0dd14a89c00e94f681c17daf54cad89d95181ec4"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/devtestlabs/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_devtestlabs-* \
"

SRC_DIR = "azure-mgmt-devtestlabs"
