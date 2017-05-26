DESCRIPTION = "Microsoft Azure Container Registry Client Library for Python"

PV = "0.2.1"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-common \
"

SRCREV = "90fdf3a06f62b32f7a1616eccfa7a88eb1e95997"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/containerregistry/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_containerregistry-* \
"

SRC_DIR = "azure-mgmt-containerregistry"
