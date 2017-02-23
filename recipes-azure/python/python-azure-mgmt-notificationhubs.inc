DESCRIPTION = "Microsoft Azure Notification Hubs Resource Management Client Library for Python"

PV = "0.30.0"
PR = "r1"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "dead70a9daf4247abeec7c5aa7771d35fa30936a"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/notificationhubs/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_notificationhubs-* \
"

SRC_DIR = "azure-mgmt-notificationhubs"
