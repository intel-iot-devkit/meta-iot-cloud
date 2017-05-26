DESCRIPTION = "Microsoft Azure Resource Management Client Library for Python"

PV = "1.1.0rc1"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "c3838f2c3ce22ad9bb47dd027b796ec0f9129cd7"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/resource/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_resource-* \
"

SRC_DIR = "azure-mgmt-resource"
