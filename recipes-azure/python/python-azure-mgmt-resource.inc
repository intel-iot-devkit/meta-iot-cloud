DESCRIPTION = "Microsoft Azure Resource Management Client Library for Python"

PV = "0.31.0"
PR = "r2"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
	${PYTHON_PN}-msrestazure \
"

SRCREV = "db428351c5861f21ed5867fdd1a03f89e235ceee"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/resource/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_resource-* \
"

SRC_DIR = "azure-mgmt-resource"
