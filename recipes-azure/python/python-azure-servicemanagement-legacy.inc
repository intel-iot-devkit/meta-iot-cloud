DESCRIPTION = "Microsoft Azure Legacy Service Management Client Library for Python"

PV = "0.20.5"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-requests \
	${PYTHON_PN}-pyopenssl \
"

SRCREV = "ede6f993191d6c77230240808bee7f9ba8f43106"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/servicemanagement/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_servicemanagement_legacy-* \
"

SRC_DIR = "azure-servicemanagement-legacy"
