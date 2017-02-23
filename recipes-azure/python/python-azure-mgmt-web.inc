DESCRIPTION = "Microsoft Azure Web Apps Resource Management Client Library for Python"

PV = "0.31.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "10a7c479eed1a9fa6f2ae3d5afd32383cb805488"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/web/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_web-* \
"

SRC_DIR = "azure-mgmt-web"
