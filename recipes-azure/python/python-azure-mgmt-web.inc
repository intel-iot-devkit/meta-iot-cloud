DESCRIPTION = "Microsoft Azure Web Apps Resource Management Client Library for Python"

PV = "0.30.1"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "3da0d8f5f57ea33d21d98c734847b09caef014b6"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/web/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_web-* \
"

SRC_DIR = "azure-mgmt-web"
