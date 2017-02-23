DESCRIPTION = "Microsoft Azure IoTHub Management Client Library for Python"

PV = "0.2.1"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "f54b2343af9ebebaf8e3b081b7c9f7513af8d848"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/iothub/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_iothub-* \
"

SRC_DIR = "azure-mgmt-iothub"
