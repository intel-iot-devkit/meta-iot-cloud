DESCRIPTION = "Microsoft Azure Monitor Client Library for Python"

PV = "0.3.0"
PR = "r0"

RDEPENDS_${PN} += "\
    ${PYTHON_PN}-msrestazure \
    ${PYTHON_PN}-azure-common \
"

SRCREV = "bc8e2853c2851b757741eab10e803881242c6852"

FILES_${PN} = "\
    ${PYTHON_SITEPACKAGES_DIR}/azure/monitor/* \
    ${PYTHON_SITEPACKAGES_DIR}/azure_monitor-* \
"

SRC_DIR = "azure-monitor"
