DESCRIPTION = "Microsoft Azure EventHub Management Client Library for Python"

PV = "0.2.0"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
"

SRCREV = "6d45c9629a68ba896a34a17709be6d2f1b9fd9a5"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/eventhub/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_eventhub-* \
"

SRC_DIR = "azure-mgmt-eventhub"
