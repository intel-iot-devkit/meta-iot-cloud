DESCRIPTION = "Microsoft Azure Resource Management Client Library for Python"

PV = "0.30.2"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
	${PYTHON_PN}-msrestazure \
"

SRCREV = "9f96098a09237b3ba001e4b879351971b441ddf3"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/resource/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_resource-* \
"

SRC_DIR = "azure-mgmt-resource"
