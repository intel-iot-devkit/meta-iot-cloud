DESCRIPTION = "Microsoft Azure Container Registry Client Library for Python"

PV = "0.2.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-common \
"

SRCREV = "606cd280d522afcef5bb1f60af8472b16ee8b0df"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/containerregistry/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_containerregistry-* \
"

SRC_DIR = "azure-mgmt-containerregistry"
