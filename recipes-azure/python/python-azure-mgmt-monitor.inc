DESCRIPTION = "Microsoft Azure Monitor Management Client Library for Python"

PV = "0.1.0"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "6e443a97572b99755a7667c33d78ea1cbdefca16"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/monitor/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_monitor-* \
"

SRC_DIR = "azure-mgmt-monitor"
