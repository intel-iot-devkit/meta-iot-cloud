DESCRIPTION = "Microsoft Azure RDBMS Management Client Library for Python"

PV = "0.1.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "c1e229f2d02a8adf287c03396f9cca8ecbc2ff7d"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/rdbms/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_rdbms-* \
"

SRC_DIR = "azure-mgmt-rdbms"
