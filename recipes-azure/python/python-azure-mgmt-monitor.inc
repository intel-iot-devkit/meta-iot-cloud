DESCRIPTION = "Microsoft Azure Monitor Management Client Library for Python"

PV = "0.2.1"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "791c8adfaa6a3a35a7c4ab062e8c03b149b05f6f"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/monitor/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_monitor-* \
"

SRC_DIR = "azure-mgmt-monitor"
