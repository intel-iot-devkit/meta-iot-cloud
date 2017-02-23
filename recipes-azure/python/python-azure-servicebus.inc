DESCRIPTION = "Microsoft Azure Service Bus Client Library for Python"

PV = "0.21.0"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-requests \
"

SRCREV = "b176bd2d1b6985c72b5eeb7adb8bda0ce7c3afb6"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/servicebus/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_servicebus-* \
"

SRC_DIR = "azure-servicebus"
