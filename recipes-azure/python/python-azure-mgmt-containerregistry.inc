DESCRIPTION = "Microsoft Azure Container Registry Client Library for Python"

PV = "0.3.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "38aadc891583c733a7b25242d43906819858d719"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/containerregistry/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_containerregistry-* \
"

SRC_DIR = "azure-mgmt-containerregistry"
