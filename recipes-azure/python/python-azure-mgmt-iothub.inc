DESCRIPTION = "Microsoft Azure IoTHub Management Client Library for Python"

PV = "0.2.2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-msrestazure \
"

SRCREV = "6f8057c2babb2a976f4f2f402dcf0bd9114af71a"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/iothub/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_iothub-* \
"

SRC_DIR = "azure-mgmt-iothub"
