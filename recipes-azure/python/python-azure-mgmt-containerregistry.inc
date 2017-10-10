DESCRIPTION = "Microsoft Azure Container Registry Client Library for Python"

PV = "0.3.1"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-common \
"

SRCREV = "324f99d26dd6f4ee9793b9bf1d4d5f928e4b6c2f"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/containerregistry/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_containerregistry-* \
"

SRC_DIR = "azure-mgmt-containerregistry"
