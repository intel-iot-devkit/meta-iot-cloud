DESCRIPTION = "Microsoft Azure ServiceFabric Client Library for Python"

PV = "5.6.130"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-common \
"

SRCREV = "7fe5b68869bf5dc950acab1da002e52d09a1a6a0"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/servicefabric/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_servicefabric-* \
"

SRC_DIR = "azure-servicefabric"
