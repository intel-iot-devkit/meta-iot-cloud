DESCRIPTION = "Microsoft Azure ServiceBus Management Client Library for Python"

PV = "1.1.0"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
"

SRCREV = "f915ead25757e1623e20a150e4dec36987fde056"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/servicebus/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_servicebus-* \
"

SRC_DIR = "azure-mgmt-servicebus"
