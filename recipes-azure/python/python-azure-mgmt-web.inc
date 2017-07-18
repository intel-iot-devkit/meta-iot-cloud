DESCRIPTION = "Microsoft Azure Web Apps Resource Management Client Library for Python"

PV = "0.32.0"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-msrestazure \
	${PYTHON_PN}-azure-common \
"

SRCREV = "953b68989f882682adb0069fb9020afd37976d80"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/web/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_web-* \
"

SRC_DIR = "azure-mgmt-web"
