DESCRIPTION = "Microsoft Azure Resource Management Client Library for Python"

PV = "0.30.2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
	${PYTHON_PN}-msrestazure \
"

SRCREV = "5e0044db2faedfae4d5f2c3bf638ff677e2556c8"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/resource/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_resource-* \
"

SRC_DIR = "azure-mgmt-resource"
