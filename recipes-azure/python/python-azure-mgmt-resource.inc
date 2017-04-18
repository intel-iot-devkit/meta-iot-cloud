DESCRIPTION = "Microsoft Azure Resource Management Client Library for Python"

PV = "1.0.0rc1"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
	${PYTHON_PN}-msrestazure \
"

SRCREV = "b724b8cb92739243e42d05b5929792a7d2b8b500"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/resource/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_resource-* \
"

SRC_DIR = "azure-mgmt-resource"
