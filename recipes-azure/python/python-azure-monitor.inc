DESCRIPTION = "Microsoft Azure Monitor Client Library for Python"

PV = "0.1.0"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
"

SRCREV = "ccb6e26bb0aec4b66f01a824d1bd93c88c74ba7d"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/monitor/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_monitor-* \
"

SRC_DIR = "azure-monitor"
