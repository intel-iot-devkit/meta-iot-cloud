DESCRIPTION = "Microsoft Azure Monitor Client Library for Python"

PV = "0.2.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-common \
"

SRCREV = "16f43777ca7cccfffc767204fe90c10203b16d21"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/monitor/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_monitor-* \
"

SRC_DIR = "azure-monitor"
